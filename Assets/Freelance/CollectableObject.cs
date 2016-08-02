using System;
using UnityEngine;

public class CollectableObject : MonoBehaviour
{
    public SphereCollider myCollider;
    public float colliderRadius = 1.2f;
    public LayerMask playerLayer;

    public static event Action<GameObject, GameObject> Collected;

    // Use this for initialization
    void Start()
    {
        if (myCollider == null)
        {
            myCollider = GetComponent<SphereCollider>();
        }

        if (myCollider)
        {
            myCollider.isTrigger = true;
            myCollider.radius = colliderRadius;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (((1 << other.gameObject.layer) & playerLayer) != 0)
        {
            if (Collected != null)
                Collected(other.gameObject, gameObject);
        }
    }
}
