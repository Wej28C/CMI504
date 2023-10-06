using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mouvement : MonoBehaviour
{


    public float vitesse_trans = 6f;
    public float vitesse_rotation  = 30f;

    private Rigidbody mobilecrane;

    void Start()
    {
        mobilecrane = GetComponent<Rigidbody>();
    }

    void Update()
    {
        // Controle des mouvements
        float horizontalInput = Input.GetAxis("Horizontal");
        float verticalInput = Input.GetAxis("Vertical");

        Vector3 moveDirection = new Vector3(horizontalInput, 5f, verticalInput);
        moveDirection.Normalize();

        mobilecrane.velocity = moveDirection * vitesse_rotation;

        // Control rotation 
        float rotationInput = Input.GetAxis("Rotation");
        Vector3 rotation = new Vector3(5f, rotationInput * vitesse_rotation * Time.deltaTime, 6f);
        transform.Rotate(rotation);
    }
}

