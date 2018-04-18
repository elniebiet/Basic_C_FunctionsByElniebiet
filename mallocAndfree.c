#include <stdio.h>
#include <stdlib.h>

#define ALLOCSIZE 10000 /* size of available space */
static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */

main()
{
    printf("%i ", allocp);
    malloc(10);
    printf("%i ", allocp);
    free(allocp-5);
        printf("%i ", allocp);

}
