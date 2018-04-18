#include <stdio.h>

int exists(const char* ptr, char* from_mod) //return 0 if number exists, else return 1;
{
    if(strstr(ptr, from_mod))
        return 0;
    else
        return 1;
}
int main()
{
    char* fname = "aniebiet akpan";
    char* name = "akpan";
    printf("%i", exists(fname, name));
}
