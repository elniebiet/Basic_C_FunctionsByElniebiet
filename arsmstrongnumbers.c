#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for(i=11; i<1000; i++){
        if(i%10 > 0 && i%10 < 10){  //check if its a 2dig number
            int a = i/10; //first digit
            int b = i%10;  //second digit
            int c = pow(a,3)+pow(b,3);
            if(c==i)
                printf("%i", c);
        }
        if(i%100 > 0 && i%100 < 100){ //check if a 3digit number
            int d = i/100; //first digit
            int e = (i/10)%10;//second digit
            int g = i%10; //third digit
            int h = pow(d, 3) + pow(e, 3) + pow(g, 3);
            if(h == i)
                printf("%i\n", h);

        }

    }
}

