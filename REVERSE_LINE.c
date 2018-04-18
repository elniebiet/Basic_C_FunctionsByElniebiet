#include <stdio.h>
#include <stdlib.h>

void rev_line(char s[]);

main()
{
    //preparing to receive any xter in input line except '\n'
    char input[100];
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
    rev_line(input);
    printf("\ntold you...(^,^):  %s\n\n", input);
}
//the reverse man
void rev_line(char s[])
{
    char  hold_lines[100];
    int i=0;
    int k = strlen(s);
    int j = k;
    int l;
    while(i < k){
        --j;
        hold_lines[i] = s[j];
        ++i;
    }
    for(l=0; l<strlen(s); l++){
        s[l] = hold_lines[l];
    }

}

