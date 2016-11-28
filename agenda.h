#include <stdio.h>
#include "contacto.h"

void leer_name(contacto agenda[20]){
  for (int i = 0; i < 20; i++) {
    scanf("%c", agenda[i].nombre );
  }
}
//-------------------------------------------------
void imprimir_nombre(contacto agenda[20]){
  for (size_t i = 0; i < 20; i++) {
    printf("El nombre #%lu ", i );
    printf("%s\n", agenda[i].nombre);
  }
}
