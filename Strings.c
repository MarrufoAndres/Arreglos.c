#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char nombre[] = "Alfonso";
  char apellido[] = "Andres";
  int comparacion = strcmp(nombre , apellido);

  if (comparacion == 0) {
    printf("Son iguales\n" );
  }else{
      printf("Son diferentes\n");
  }
  printf("Comparacion = %d \n",comparacion );

  char name[] = "Andrés";

  printf("%s tiene longitud %lu chars\n", name, strlen(nombre));

  char mensaje[100]= "";

  strcat(mensaje,"hola");
  strcat(mensaje," ");
  strcat(mensaje,"mundo");

  printf("%s\n", mensaje);

  if (strstr( mensaje, "hol") != NULL) {
    printf("%s tiene \"hol\"\n", mensaje);
  }else{
    printf("NAH\n");
  }

  strcpy(mensaje , "Soy arandi");

  printf("%s\n", mensaje);

  char line[300] = "Hola, como estas. Espero que estes bien.";
  char * token = strtok(line,",. ");

  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, ",. ");
  }

  return 0;
}
