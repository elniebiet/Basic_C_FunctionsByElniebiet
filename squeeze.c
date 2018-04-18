#include <stdio.h>
#include <stdlib.h>

void squeeze(char xter, char s[]);


main()
{
    //preparing to receive any xter in input line except '\n'
    char input[100];
    char xter = 'c';
    int c;
    int i=0;
    printf("WARNING: if you enter a line of text, i will call the reverse line function!!! \n\n\n ENTER LINE: ");
    while((c = getchar()) != '\n'){
        input[i] = c;
        ++i;
    }
    if(c == '\n'){
    input[i] = '\0';
    }
    //calling the rev_line function
    squeeze(xter, input);
    printf("\ntold you...(^,^):  %s\n\n", input);
}
//the reverse man
void squeeze(char xter, char s[])
{
    int i, j;
    char prev;
    for(i=0; i<strlen(s); i++){
            if(s[i] == xter)
                s[i] = '\a';
        }

}

