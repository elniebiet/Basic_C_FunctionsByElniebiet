#include <stdlib.h>
#include <stdio.h>
void rstrip(char s[]);

main()
{
    char s[] = "                    this is a string i wrote      ";
    rstrip(s);
    printf("\n[%s]", s);

    return 0;
}
void rstrip(char s[])
{
    int i=0, j=0, k=0, l=0, m=0,n=0, index=0;
    char temp[100];

    for(i=(strlen(s)-1), j=0; j<strlen(s); --i, ++j){
        temp[j] = s[i];
        if(j == strlen(s)){
            break;
        }
    }
    temp[j] = '\0';
    for(k=0; k<strlen(temp); ++k){
        if((temp[k] != ' ') && (temp[k] != '\t') && (temp[k] != '\n')){
            index = k;
            break;
        }
    }
    if(index == 0)
        ;
    else{
        for(l=(strlen(temp)-1), m=0; l>=0; --l, ++m){
            s[m] = temp[l];
            if(l == index)
                break;
        }
        m++;
        s[m] = '\0';
    }


}
