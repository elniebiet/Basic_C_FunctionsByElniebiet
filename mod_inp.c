#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long int lg_man;
char* mod_num(lg_man num) //returns a ptr to modified num.
{
    char str[20];
    char mod[] = "+234";
    char *p;
    char *w;
    w = p;
    sprintf(str,"%llu", num);
    strcat(mod, str);
    //printf("%i", strlen(mod));
    int i=0;
    while(i<strlen(mod)){
        *p = mod[i];
        ++p;
        ++i;
    }
    *p = '\0';
    return w;
}
int main()
{
    char* val = mod_num(343343455);

    printf("%s", val);

    return 0;
}
