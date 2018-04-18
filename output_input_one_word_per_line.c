#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c;
    while((c = getchar()) != '#'){
        if(c == ' ' || c == '\t')
            putchar('\n');
        else {
            putchar(c);

        }
    }
}
