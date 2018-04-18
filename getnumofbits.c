#include <stdlib.h>
int main()
{
    int num = 1111;
    int bits[100];
    int tens = 1;
    int c_bits = 0;
    int rem = 0;
    int t_num = 0;

    int n_bits;
    n_bits = 1;
    int tens1 = 10;
    while((num/tens1) != 0){
        ++n_bits;
        tens1 *= 10;
    }
    printf("%i", n_bits);



}
