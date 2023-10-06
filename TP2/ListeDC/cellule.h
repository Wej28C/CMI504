#ifndef CELLULE_T
#define CELLULE_T

typedef struct cellule_type {
    int id_sommet;
    struct cellule_type * pred;
    struct cellule_type * suiv;
} cellule_t;

void initialiser_cellule (cellule_t * c, int id_sommet);

#endif //CELLULE_T