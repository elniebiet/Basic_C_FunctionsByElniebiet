#include <stdlib.h>
#include <stdio.h>
/*Coded by Wolf
.Date: 12/07/16
///~*/
/*you may create the a header file to use the functions
these functions don't return another string but modifies your string. */

void lstrip(char s[]);
void rstrip(char s[]);
void strip(char s[]);

int main()
{

    char message0[] = "           I am the test string    ";
    printf("This is the given string: [%s]", message0);


    char message1[] = "           I am the test string    ";
    lstrip(message1);
    printf("\n\nAfter lstrip: \n[%s]", message1);

    char message2[] = "           I am the test string    ";
    rstrip(message2);
    printf("\n\nAfter rstrip: \n[%s]", message2);

    char message3[] = "           I am the test string    ";
    strip(message3);
    printf("\n\nAfter strip: \n[%s]\n\n\n", message3);

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
