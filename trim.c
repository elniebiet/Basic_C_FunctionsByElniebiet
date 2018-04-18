#include <stdlib.h>
#include <stdio.h>
void strip(char s[]);

main()
{
    char s[] = "this is a string i wroteeerere      we       ";
    strip(s);
    printf("[\n%s]", s);

    return 0;
}
void strip(char s[])
{
    int i=0, j=0, k=0, l=0;
    char temp[100];

    for(i=0; i<strlen(s); ++i){
        if((s[i] != ' ') && (s[i] != '\t') && (s[i] != '\n')){
            temp[j] = s[i];
            ++j;
        }
        else
            ;
    }
    temp[j] = '\0';

    for(k=0; k<strlen(temp); k++){
        s[k] = temp[k];
        if(k == strlen(temp)-1){
            ++k;
            s[k] = '\0';
        }
    }
}
