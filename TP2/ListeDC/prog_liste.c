#include "cellule.h"
#include "liste.h"
#include "cellule.c"
#include "liste.c"

int main() {
    liste_t l;
    int i,tmp;
    cellule_t * c;
    initialiser_liste(&l);
    for (i = 0; i < 4; i++) {
        scanf("%d",&tmp);
        c = (cellule_t *)(malloc(sizeof(cellule_t)));
        initialiser_cellule(c,tmp);
        inserer_liste(&l,c);
    }
    afficher_liste(&l);
    c = rechercher_liste(&l,3);
    supprimer_liste(&l,&c);
    afficher_liste(&l);
}