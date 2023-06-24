/*  
3. hacer una funcion que diga si una cadena hay solo digitos
*/  

#include <stdio.h>
#include <string.h>

int main() {
  char cadena [100];
  int i, count =0;

  printf (" digite una cadena: ");
  gets(cadena);

  for (i = 0; i < strlen(cadena); i++){ 
    if (cadena[i] >= '0' && cadena[i] <= '9') {
      count++;
    }
  }

  if (count == strlen(cadena)) {
    printf ("la cadena de caracteres solo posee digitos \"%s\"",cadena);
  }else if ( count > 0) {
    printf(" la cadena de caracter posee \"%d\" digitos", count);
  } else {  
    printf("la cadena de caracteres no posee solo digitos");  
  }

  
}

