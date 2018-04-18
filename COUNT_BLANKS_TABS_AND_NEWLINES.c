#include <stdio.h>
int main()
{
    int c, ns=0, nt=0, nl=0;
    while((c = getchar()) != EOF){
        if(c == ' ')
            ++ns;
        if(c == '\t')
            ++nt;
        if(c == '\n'){
            ++nl;
            printf("nS=%i, nT=%i, nL=%i\n", ns, nt, nl);
        }

    }
}
