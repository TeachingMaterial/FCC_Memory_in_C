#include <stdio.h>
int main () {
    // define your variables in this region 
    int bin = 10;
    int value = 123456789;
    // end of variabl region
    
    // create a pointer here
    int* pointer = (&value);
    // end of pointer region
    
    printf("Memory Address        ||    Value        \n");
    printf("------------------------------------------\n");
    
    // put the for loop here
    for (int i = 0; i < bin; ++i)
    {   
        printf(" %lu      ||    %d \t\t \n",(unsigned long)pointer,(unsigned int)*pointer); 
        pointer = pointer-1;
    }
    // end of for loop
    return 0;
}
