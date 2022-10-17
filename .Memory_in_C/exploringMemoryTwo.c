#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n = 11, i;
    char ptr[11] = "hello world";
    
    printf ("\nPrinting elements of 1-D array: \n\n");
    for (i = 0; i < n; i++)
    {
        printf ("%c ", ptr[i]);
    }
    printf ("\n\nNow what is the memory location for each index and the array itself: \n\n");
    printf("      Memory Address (HEX)  ||  Element        Value\n");
    printf("----------------------------------------------------\n");
    
    for (i = 0; i < n; i++)
    {
        printf ("\t%p      ||   ptr[%d]    =    %c\n", &ptr[i],i,ptr[i]);
    }
    printf("----------------------------------------------------\n");
    printf("\t%p      ||   ptr[]     =  %c (this is the array's address too!) \n", &ptr,*ptr);
    
   
    return 0;
}
