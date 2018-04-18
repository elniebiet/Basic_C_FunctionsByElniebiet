#include <stdio.h>
#include <stdlib.h>
int dectobin(int i);
int main(){
    printf("%i", dectobin(1));

}

int dectobin(int i)
{
    int inbin=0;
    int inbinArr[50];
    int bits = 1;
    int num = i;
    int temp_num = 0;
    temp_num = num;

    if(num == 0)
        return 0;
    else{
        while((temp_num / 2) != 0){
            if(temp_num == num){

                inbinArr[bits] = temp_num%2;
                temp_num /= 2;
                ++bits;
            }
            else{
                inbinArr[bits] = temp_num%2;
                temp_num /= 2;
                ++bits;
            }
        }
        inbinArr[bits] = 1;
        ++bits;
        inbinArr[bits] = '\0';

        int j;
        for(j=bits-1; j>0; j--){
            if(inbinArr[j] == 0){
                inbin *= 10;
            }
            else if(inbinArr[j] == 1)
                inbin = (inbin*10 + 1);
        }
        return inbin;
    }

}
