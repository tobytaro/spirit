using System.Collections;
using UnityEngine;

public class CollectActionEventListener : MonoBehaviour
{
    void OnEnable()
    {
        CollectableObject.Collected += OnCollected;
    }

    void OnDisable()
    {
        CollectableObject.Collected -= OnCollected;
    }

    void OnCollected(GameObject collectedBy, GameObject collectedObject)
    {
        collectedObject.SetActive(false);
        Debug.LogFormat("{0} collected {1} at {2}", collectedBy, collectedObject, Time.time);
    }
}
