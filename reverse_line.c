#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char* rev_line(char* l)
{
    char *rev_l = malloc(100*sizeof(char));
    int p,q=0;
    p = strlen(l)-1;
    *(rev_l+p+1) = '\0';
    while(1){
        *(rev_l+q) = *(l+p);
        if(*(l+p) == '\0')
            break;
        ++q;
        --p;
    }
    return rev_l;
}
int main()
{
    printf("%s", rev_line("aniebiet akpan"));

}
