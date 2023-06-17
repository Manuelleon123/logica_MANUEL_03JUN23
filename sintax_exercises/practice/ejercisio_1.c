/* 
1. hacer una funcion que diga si un numero es primo
 */
#include <stdio.h>

int main() {
  int num;
  int count = 0;

  printf ("ingrese un numero:");
  scanf ("%d", &num);

  for (int i = num; i > 0; i--){
    if (num % i == 0) {
      count++;
    }
  }   

  if (count == 2) {
    printf ("el numero %d es primo", num);          
  } else {
    printf ("el numero %d no es primo", num);
  }

  return 0;
}
