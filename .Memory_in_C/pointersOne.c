#include <stdio.h>

int main()
{
    int a=1, b =2 ,c =0;
  
    printf("Address for the variable a: %lu \n", (long)&a); // long casts the value in &a to a long integer, upto 32 bits
    printf("Address for the variable b: %lu\n", (long)&b);
    printf("Address for the variable c: %lu \n", (long)&c);
    return 0;
}
