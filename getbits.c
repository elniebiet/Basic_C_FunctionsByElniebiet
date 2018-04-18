#include <stdio.h>
#include <stdlib.h>
int bintodec(int bin);
main()
{
    printf("%i", bintodec(1111));
}
int bintodec(int bin)
{
    int num = bin;
    int bits[100];
    int tens = 1;
    int c_bits = 0;
    int rem = 0;
    int t_num = 0;

    //get number of bits
    int n_bits;
    n_bits = 1;
    int tens1 = 10;
    while((num/tens1) != 0){
        ++n_bits;
        tens1 *= 10;
    }

    if(num == 0)
        return 0;
    else{
        int i;
        for(i=0; i<n_bits; i++){
            t_num = num/tens;
            rem = t_num%2;
            if(rem == 0){
                if(c_bits == n_bits-1){
                    bits[c_bits] = 1;
                    break;
                }else {
                    bits[c_bits] = 0;
                    ++c_bits;
                    tens *= 10;
                }
            }
            else if(rem == 1){
                bits[c_bits] = 1;
                ++c_bits;
                tens *= 10;
            }
        }
        bits[n_bits] = '\0';

        int indec = 0;
        int k;
        int n=0;
        for(k=0; k<n_bits; k++){
            indec += (bits[n] * pow(2, n));
            ++n;
        }
        return indec;
    }

}
