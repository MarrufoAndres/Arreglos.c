#include <stdio.h>
#include <string.h>

typedef struct contac{
  char nombre[100];
  char apellidos[100];
  char email[100];
  char cel_num[10];

} contacto;

int main(int argc, char const *argv[]) {
  contacto agenda[20];
  for (size_t i = 0; i < 20; i++) {
    scanf("%s", agenda[i].nombre );
  }

  for (size_t i = 0; i < 20; i++) {
    printf("%s\n", agenda[i].nombre);
  }

  return 0;
}
