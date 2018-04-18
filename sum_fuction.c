#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>

#define T type

#define sum(T)                               \
T sum_##T(T a, ...) {                        \
    va_list list;                            \
    va_start(list, a); T sum = a;            \
    T val = va_arg(list, T);                 \
    while(true) {                            \
        if (val == 'q' || val == -0.0) break;\
        sum += val;                          \
        val = va_arg(list, T);               \
    }                                        \
    va_end(list);                            \
    return sum;                              \
} //endofmacro



int main(void) {

    sum(int);
    sum(double);

    printf("%2d\t%.2lf\n", sum_int(15,8,2,6,3,4,'q'), sum_double(9.4,2.5,2.5,1.0,-0.0));


    return 0;
}
