#include <stdlib.h>
#include <stdio.h>
#define ON 1
#define OFF 0
int main()
{
    int c, nc = 0, nl = 0, nw = 0, nw_status;
    while((c = getchar()) != '#'){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\t' || c == '\n')
            nw_status = OFF; //out of word
        else if(nw_status == OFF){
            nw_status = ON;
            ++nw;
        }

    }
    printf("\n\n\n nC=%i, nl=%i, nw=%i  ", nc, nl, nw+1);
}
