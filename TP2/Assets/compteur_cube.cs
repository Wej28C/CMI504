using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class compteur_cube : MonoBehaviour
{   
    private int compteur=0; 
    //pour voir si l'objet entre collision 
     private void OnTriggerEnter(Collider other)
    {
        // Vérifie si l'objet entrant est la charge
        if (other.CompareTag("Charge"))
        {
            compteur++; // Incrémente le compteur.
            Debug.Log("Nombre de charges: " + compteur);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
