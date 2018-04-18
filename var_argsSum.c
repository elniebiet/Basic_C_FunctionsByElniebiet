#include <stdio.h>
#include <stdarg.h>
int sumN(int f_num, ...)
{


    //int num = (int)num;
    va_list nums;
    int sum = f_num;
    va_start(nums, f_num);
    int x=0;

    for(x=1; x<5; x++){
        sum += va_arg(nums, int);
    }
    va_end(nums);


    return sum;

}

int main()
{
    printf("%i", sumN(3,5,3, 1,5));
}
