#include <stdio.h>
#include <stdlib.h>

#define ALLOCSIZE 10000 /* size of available space */
static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */

char *alloc(int n);
void afree(char *p);
main()
{
    printf("%i", allocp);
    alloc(10);
    printf("%i", allocp);
    afree(allocp-5);
        printf("%i", allocp);

}
char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
        allocp += n;
        return allocp - n; /* old p */
    } else /* not enough room */
        return 0;
}
void afree(char *p) /* free storage pointed to by p */
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
