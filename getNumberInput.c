#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef unsigned long long int lg_man;
lg_man getInput() /*retutn 0 if i/p has an
 invalid xter except 0, else return number;*/
{
    int c, c_dig = 0;
    char h[20];
    char temp[20];
    lg_man number;

    fgets(temp, 20, stdin);
    int i;
    for(i=0; i<strlen(temp); i++){
        if((!isspace(temp[i])) && (!isdigit(temp[i])) && temp[i] != '\n'){
                ++c_dig;
            return 0;
        }
        else {
            if(isspace(temp[i]))
                ;
            else{
                h[c_dig] = temp[i];
                ++c_dig;
            }
        }
    }
    sscanf(h, "%llu", &number);
    return number;
}
main()
{
    lg_man n= getInput();
    printf("%llu", n );
}
