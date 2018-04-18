#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//read lines from file
char* readLines(char *filename)
{
    FILE *fp;
    int *c, i=0;
    char *buffer = malloc(sizeof(char) * 10000);

    fp = fopen("C:/Users/DANNY/Documents/C/files/file1.txt", "r");
    while(c != EOF){
        c = fgetc(fp);
        *(buffer+i) = c;
        ++i;
    }

    fclose(fp);
    return buffer;
}

//reverse a single line
char* rev_line(char* l)
{
    char *rev_l = malloc(1000*sizeof(char));
    int p,q=0;
    p = strlen(l)-1;
    *(rev_l+p+1) = '\0';
    while(1){
        *(rev_l+q) = *(l+p);
        if(*(l+p) == '\0')
            break;
        ++q;
        --p;
    }
    *(rev_l+q-1) = '\0';
    return rev_l;
}

//check line
char* check_line(char* l)
{

    char* s_line = malloc(100*sizeof(char));
    char* revd_line = malloc(100*sizeof(char));
    int m=0, k=0;


    while(1){
        if(isalpha(*(l+m)) != 0){
            *(s_line+k) = tolower(*(l+m));
        ++k;
        }
        else if((*(l+m) == '\n')||(*(l+m) == EOF))
                break;
        else
            ;
        ++m;
    }
    *(s_line+k) = '\0';
    revd_line = rev_line(s_line);

    char* status;
    if(strcmp(s_line, revd_line) == 0){
        status = "This line is a pallindrome";
        if(strlen(s_line) == 0)
            status = " ";
    }
    else
        status = "This line is not a pallindrome";

    return status;
}



int main()
{
    char *lines = readLines("C:/Users/DANNY/Documents/C/file1.txt");

    char** pp = malloc(10000*sizeof(char)); //pointers to hold the lines

    int c_p=1, j=0;

    *pp = lines;

    for(j=1; j<strlen(lines); j++){
        if(*(lines+j) == '\n'){
            *(pp+c_p) = lines+j+1;
            ++c_p;
        }

    }
    *(pp+c_p) = '\0';
    int k=0;

    printf("These are the lines from the file: \n\n\n\n");
    printf("1: ");

    int i, c_line=2;
    for(i=0; i<(strlen(lines)-2); i++){
        printf("%c", *(lines+i));
        if(*(lines+i) == '\n'){
            printf("%s\n", check_line(*(pp+k)));
            printf("\n%i: ", c_line);
            ++k;
            ++c_line;
        }
    }

    return 0;
}
