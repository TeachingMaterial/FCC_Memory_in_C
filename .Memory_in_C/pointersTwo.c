#include <stdio.h>

int main () {

   int  a = 15;      /* actual variable declaration */
   int  *pointerToA; /* pointer variable declaration */

   pointerToA = &a;  /* store address of var in pointer variable*/

   printf("Address of A variable: %lu\n", (long)&a);

   /* address stored in pointer variable */
   printf("Address stored in pointerToA variable: %lu\n", (long)pointerToA);

   /* access the value using the pointer */
   printf("Value of *pointerToA variable: %d\n", *pointerToA);
   
   /* address of the pointer itself */
    printf("Address of pointerToA: %lu\n", (long)&pointerToA);

   return 0;
}
