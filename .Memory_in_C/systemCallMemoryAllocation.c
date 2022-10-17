#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /*for system calls, sbrk*/

int main(int argc, char* argv[]) /* an array of inputs*/
{
    char *ptr[7];
    int n;
    printf("\nPid of %s: %d", argv[0], getpid());
    printf("Initial program break   : %p", sbrk(0));
    for(n=0; n<5; n++) ptr[n] = malloc(16 * 1024);
    printf("After 5 x 16kB malloc   : %p", sbrk(0));
    free(ptr[1]);
    printf("After free of second 16kB       : %p", sbrk(0));
    ptr[5] = malloc(16 * 1024);
    printf("After allocating 6th of 16kB    : %p", sbrk(0));
    free(ptr[5]);
    printf("After freeing last block        : %p", sbrk(0));
    ptr[6] = malloc(18 * 1024);
    printf("After allocating a new 18kB     : %p", sbrk(0));
    getchar();
    return 0;
}
