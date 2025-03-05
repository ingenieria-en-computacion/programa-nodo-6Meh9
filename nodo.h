#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>
#include <stdio.h>

typedef int DATO;
typedef struct Nodo Nodo;
struct Nodo{
   DATO dato;
   Nodo* sig;
};

Nodo* crear_nodo ();
Nodo asignar_dato (Nodo*, DATO);
bool borrar_nodo (Nodo*);
DATO obtener_dato (Nodo*);
Nodo* asignar_ref (Nodo*, Nodo*);
Nodo* obtener_ref (Nodo*);

#endif
