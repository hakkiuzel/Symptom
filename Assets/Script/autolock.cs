using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Invector.vCharacterController;
using Invector.vCamera;
using Sickscore;

namespace Sickscore
{
	[RequireComponent(typeof(vLockOn))]
	public class autolock : MonoBehaviour
	{
		#region Variables
		public LayerMask EnemyLayers;
		[Range(1, 50)]
		public float AutoLockRadius = 5f;
		public float TimeBetweenTargetChange = 1f;
		protected float _currentChangeTime;
		public bool DebugShowRadius = false;

		private vThirdPersonCamera vCamera;
		private vLockOn vLock;

		protected Transform _currentEnemy;
		private Transform currentEnemy {
			set {
				// unlock old target
				if (_currentEnemy != null)
					vLock.onUnLockOnTarget.Invoke (_currentEnemy);

				// lock new target
				_currentEnemy = value;
				if (_currentEnemy != null) {
					// lock target
					vCamera.SetLockTarget (_currentEnemy, 0f);
					vLock.onLockOnTarget.Invoke (_currentEnemy);
				} else {
					// no target locked
					vCamera.RemoveLockTarget ();
				}
			}
			get { return _currentEnemy; }
		}
		#endregion


		#region Main Methods
		void Awake ()
		{
			vCamera = vThirdPersonCamera.instance;
			vLock = this.GetComponent<vLockOn> ();
		}


		void Update ()
		{
			_currentChangeTime += Time.deltaTime;
		}


		void FixedUpdate ()
		{
			// get all enemies within our specified distance
			Collider[] enemies = Physics.OverlapSphere (transform.position + Vector3.up, AutoLockRadius, EnemyLayers);
			if (enemies.Length > 0) {
				// get closest enemy (order all enemies by distance and pick the first one)
				Collider closestEnemy = enemies.OrderBy (e => (e.transform.position - this.transform.position).sqrMagnitude).FirstOrDefault ();
				if (closestEnemy != null) {
					// only assign, if it's not the same
					if (closestEnemy.transform != currentEnemy) {
						// can we already switch to a new target?
						if (_currentChangeTime >= TimeBetweenTargetChange) {
							// reset timer
							_currentChangeTime = 0f;

							// set new target
							currentEnemy = closestEnemy.transform;
						}
					}
				} else {
					currentEnemy = null;
				}
			} else {
				// no enemy found...reset
				if (currentEnemy != null)
					currentEnemy = null;
			}
		}
		#endregion


		#region Utility Methods
		void OnDrawGizmos ()
		{
			if (!DebugShowRadius)
				return;

			// draw debug sphere
			Gizmos.color = Color.magenta;
			Gizmos.DrawWireSphere (transform.position + Vector3.up, AutoLockRadius);
		}
		#endregion
	}
}