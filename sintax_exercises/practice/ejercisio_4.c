/*
hacer una funcion que ordene los numeros enteros de un arreglo de forma ascendente.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
  int n, c, i, temp, element;

  printf("ingrese la cantidad de los elementos del arreglo: ");
  scanf("%i", &n);

  if (n < 1) {
    printf("cantidad invalida");
  } else {
    int* a[n];

    for (i = 0; i< n; i++) {
      printf("ingrese los elementos del arreglo[%d]", i);
      scanf("%d", &element);

      a[i]= element;
    }

    printf("contenido del arreglo:");
    for (i = 0; i< n; i++) {
      printf("[%d]", a[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++){
      for (c = i + 1; c < n; c++) {
        if (a[i] > a[c]) {
          temp = a[i];
          a[i] = a [c];
          a[c] = temp;
        }
      }
    }
    printf("arreglo ordenado: ");
    for (i =0; i < n; i++) {
      printf("[%d]", a[i]);
    }
  }
  return 0;
}



