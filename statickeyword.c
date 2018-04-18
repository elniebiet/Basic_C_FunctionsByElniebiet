/* lab4a.c */
#include <stdio.h>
int inc(void){
    static int number = 0;
    return ++number;
}
int main()
{
    printf("%i", inc());
    printf("%i", inc());
    return 0;
}
