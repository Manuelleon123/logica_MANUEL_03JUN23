/*
  2. hacer una funcion que diga si un caracter esta en cadena de caracteres 
*/

#include <stdio.h>
#include <string.h>

int main() {
  char cadena [100], caracter;
  int count = 0;

  printf("digite una cadena de caracteres: ");
  gets(cadena);
  printf("digite un caracter:");
  scanf("%c", &caracter);
  
  for(int i = 0; i < strlen(cadena); i++) {
    if (cadena[i] == caracter)
      count++;
  }
if (count > 0) {
  printf("la cadena de caracteres \"%s\" posee el caracter \"%c\" y se repite %d veces",cadena, caracter, count);
} else {
  printf("la cadena de caracteres  \"%s\" no posee el caracter \"%c\"",cadena, caracter);
}
return 0;
}