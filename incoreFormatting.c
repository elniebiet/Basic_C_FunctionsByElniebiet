/* strings.c: Illustrates C strings */
#include <stdio.h>
#include <string.h>

int main() {
    int n = 1;
    float x = 2.0;
    char s[] = "hello";
    char string[BUFSIZ];

    //bufsiz has value 512 and is in the stdio lib

    sprintf(string, "%d %f j%s", n+1, x+2, s+1); //write to string
    puts(string);
    sscanf(string, "%d %f %s", &n, &x, s); //read a string
    printf("n == %d, x == %f, s == %s\n", n, x, s);
}
