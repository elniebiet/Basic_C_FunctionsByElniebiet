#include <stdlib.h>
#include <stdio.h>
main()
{
    int c, p_loop;
    char hold_every[1000], count = 0;
    while((c = getchar()) != '#'){
        ++count;
        if( c == ' ' || c == '\t' || c == '\n')
            hold_every[count] = '|';
        else
            hold_every[count] = c;
    }
    for(p_loop = 1; p_loop <= count; p_loop++){
        printf("%c", hold_every[p_loop]);
    }
}
