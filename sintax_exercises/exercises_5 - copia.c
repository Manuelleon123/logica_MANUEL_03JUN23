#include <stdio.h>

int main() {
  /*
    variables en C

    las variables son contenedores para alamcenar valores de datos, como numeros y caracteres.

    En C, hay diferentes tipos de variables (definidas por diferentes palabras clave), por ejempo:

      *int - almacena enteros (numeros enteros), sin decimales, como 123 o -123

      *float - almacena numeros de coma  flotantes o decimales, como 19.99 o -19.99
      *char - almacena caracteres individuales como 'a' o 'b'. Los valores de char estan entre comillas simles
  */

  /*
    Declaracion (Crear) variables

    para crear una variable en C especifique el tipo y signele un valor

    *sintaxis

     tipo nombreVariable = valor

     Donde tipo es uno de los tipos de variables de C (como int) y nombreVariable es el nombre de la variable (como x miNombre)
. El signo = se utiliza para asignar el valor de una variable.
 */

// Crear una variable que almacene un numero entero

/*
Tambien puede adignar una variable sin asigar el valor y colocarselo mas tarde 
*/

// declaracion de la variable
int myNum;

// Asignamos el valor de la variable 
myNum = 15;

/*
si intentamos imprimir una variable en C no va a ocurrir nada si no le damos el formato especifico 
*/

/* int miNumero = 15;
printf(myNum); // y nada va a ocurrir
  return 0; */
  /* int miNumero = 0;
   printf("%d", miNumero); // la salida es 20

   return 0; */

    // para imprimir o hacer uso de variables en c debemos familiarizarnos con los especificadores de formato 


   // especificadores de formato 

   /*
   los especificadores de formato se usqan junto con la funcion printf() para decirle al compilador que tpo de datos esta almacenando la variable   
   
   un especificador de formato comienza con un signo de %, seguido de un caracter 
   
   por ejemplo para generar el cvalor de una variable int, debe usar el especificador de formato &d o &j y estar entre comillas dentro de la funcion printf*/


   // para imprimir otros tipos, use %c para char y %j para float 

   // decimal o de coma flotante
     float miNumeroDecimal = 9.33;  

     // para un caracter
     char miLetra = 'N';

     // impresion de variables
     printf("%f\n", miNumeroDecimal);
     printf("%c\n", miLetra);

     /* 
     para combinar texto y una variables separelos con una coma dentro de la funcion printf
      */

     /* int miNumero = 50;

     printf ("Mi numero favorito es el: %d", miNumero);
 */

 /*  para imprimir la diferentes tipos de variables en un solo printf() se  puede hacer lo siguiente:
   */

int miNumero = 30;
char miLetra = 'L';

printf("Mi numero es %d y mj letra es la %c", miNumero, miLetra);



/* 
cambiar valores de variables

si asignamos un nuevo valor a una variables existente, sobreescribimos el valor anteiro  */

int miNumero = 19;
miNumero = 91;

printf ("%d", miNumero);

/* tambien podemos asignar el valor de una variable a otra  */

//int miNumero = 57;

//int miOtroNumero = 14;

// asignamos el valor de miOtroNumero (14) a miNumero
//miNumero = miOtroNumero;

// miNumero es ahora el 14, en el lugar del 57
printf("%d", miNumero);

/* tambien podemos asignarles valores a variables vacias  */
// declaramos u
int miNumero = 57;



int miOtroNumero;
// declaramos el valor de miNumero a miOtroNumero
miOtroNumero = miNumero;

printf("%d", miOtroNumero);


// sumar valores de variables

int x = 8;
int y = 15;
int suma = x + y;
printf("%d", suma);


     return 0;
}
    
  
