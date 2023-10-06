#include <stdlib.h>
#include "cellule.h"

void initialiser_cellule(cellule_t * c, int id_sommet) {
	c->id_sommet = id_sommet;
	c->pred = NULL;
	c->suiv = NULL;
}