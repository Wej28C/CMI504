#ifndef LISTE_T
#define LISTE_T
#include "cellule.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    cellule_t * tete;
}liste_t;

void initialiser_liste (liste_t * l);
void inserer_liste (liste_t * l, cellule_t * c);
cellule_t * rechercher_liste (liste_t * l, int id);
void afficher_liste (liste_t * l);
void supprimer_liste (liste_t * l, cellule_t ** c);
void detruire_liste (liste_t * l);

#endif //LISTE_T