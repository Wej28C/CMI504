#include "liste.h"

void initialiser_liste (liste_t * l) {
    l->tete = NULL;
}

void inserer_liste (liste_t * l, cellule_t * c) {
    c->suiv = l->tete;
    c->pred = NULL;
    if (l->tete != NULL) {
        l->tete->pred = c;
    }
    l->tete = c;
}

cellule_t * rechercher_liste (liste_t * l, int id) {
    cellule_t * celltmp;
    celltmp = l->tete;
    while (celltmp != NULL && celltmp->id_sommet != id) {
        celltmp = celltmp->suiv;
    }
    return celltmp;
}

void afficher_liste (liste_t * l) {
    cellule_t * celltmp;
    celltmp = l->tete;
    while (celltmp != NULL) {
        if (celltmp->suiv == NULL) {
            printf("%d",celltmp->id_sommet);
        } else {
            printf("%d,",celltmp->id_sommet);
        }
        celltmp = celltmp->suiv;
    }
    printf("\n");
}

void supprimer_liste (liste_t * l, cellule_t ** c) {
    if ((*c)->pred != NULL) {
        (*c)->pred->suiv = (*c)->suiv;
    } else {
        l->tete = (*c)->suiv;
    }

    if ((*c)->suiv != NULL) {
        (*c)->suiv->pred = (*c)->pred;
    }

    free(*c);
    (*c) = NULL;
}

void detruire_liste (liste_t * l) {
    cellule_t * c;
    while (l->tete != NULL) {
        c = l->tete;
        supprimer_liste (l,&c);
    }
}