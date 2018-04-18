#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//will take input and output rot13 value
int main(int argc, char* argv[])
{
    char* name;
    if(argc == 2){
        printf("Enter Your name: ");
        char* name = malloc(50);
        int c, i=0;
        while((c = getchar()) != '\n'){
            *(name+i) = c;
            ++i;
        }
        *(name+i) = '\0';
	char temp[3];
	strcpy(temp, argv[1]);
	temp[3]='\0';

	printf("%s", argv[1]);
	printf("%s", temp);

        if((strcmp(temp, "-u") == 0) || (strcmp(temp, "-U") == 0)){
            printf("string entered: %s\n", name);
            int k=0;
            while(k < strlen(name)){
                *(name+k) = toupper(*(name+k)+13);
                ++k;
            }
            printf("Rot-13 string: ");
            puts(name);
        }
        else if((strcmp(temp, "-l") == 0) || (strcmp(temp, "-L") == 0)){
            printf("string entered: %s\n", name);
            int k=0;
            while(k < strlen(name)){
                *(name+k) = tolower(*(name+k)+13);
                ++k;
            }
            printf("Rot-13 string: ");
            puts(name);
        }
    }
    else
        puts("invalid input, input should have 2 arguments");
}
