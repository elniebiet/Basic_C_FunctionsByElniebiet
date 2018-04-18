#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long int lg_man;
int checkDig(lg_man number) //check if number is <, > or == 11
{
    char str[20];
    sprintf(str,"%llu%c", number,'\0');
    if(strlen(str) > 11)
        return 1;
    else if(strlen(str) < 11)
        return -1;
    else if(strlen(str) == 11)
        return 0;


}
main()
{
    int v = checkDig(1234567890);
    printf("%i", v);
}
