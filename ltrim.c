#include <stdlib.h>
#include <stdio.h>
void lstrip(char s[]);
int main()
{
    char s[] = "  this is a string i wrote";
    lstrip(s);
    printf("\n%s", s);
}
void lstrip(char s[])
{
    int i=0, j=0, k=0, l=0,m=0, index=0;
    char temp[100];
    for(i=0; i<strlen(s); i++)
        temp[i] = s[i];
    temp[i] = '\0';

    for(j=0; j<strlen(temp); j++){
        if((temp[j] != ' ') && (temp[j] != '\t') && (temp[j] != '\n')){
            index = j;
            break;
        }
    }
    for(k=index, l=0; k<(strlen(s)+index); k++, l++){
        s[l] = temp[k];
        if(k == (strlen(s) + index))
            s[k] = '\0';
    }

}
