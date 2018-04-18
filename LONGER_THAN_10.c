#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);

main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE];
    char hold_line[MAXLINE];  //hold line greater than 10

    int count=0;
    int i=0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > 10) {
            for(i=0; i<strlen(line); i++){
                hold_line[count] = line[i];
                ++count;
                if(hold_line[count] = '\n')
                    ;
            }
    }
    printf("%s", hold_line);


    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!='#' && c!='\n'; ++i)
    s[i] = c;
    if (c == '\n') {
    s[i] = c;
    ++i;
    }
    s[i] = '\0';
    return i;
    }
