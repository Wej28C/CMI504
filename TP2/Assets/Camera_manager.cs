using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camera_manager : MonoBehaviour
{
    /*tableau pour stocker les cameras */
    public Camera[] cameras; 
    private int camera_indice=0; 
    // Start is called before the first frame update
    void Start()
    {
        /** nous desactivons les caméras mais pas la première*/ 
         for (int i = 1; i < cameras.Length; i++)
        {
            cameras[i].gameObject.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.C))
        {
            // Désactivez la caméra actuelle.
            cameras[camera_indice].gameObject.SetActive(false);

            // Passez à la caméra suivante (ou retournez à la première si la dernière est atteinte).
            camera_indice = (camera_indice + 1) % cameras.Length;

            // Activez la nouvelle caméra.
            cameras[camera_indice].gameObject.SetActive(true);
        }
    }
}
