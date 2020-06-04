#include "complex_no.h"
#include <stdio.h>
int main(int argc, char const *argv[]) {
    complex a, b;
    printf("Input\n");
    printf("a.real:: ");
    scanf("%lf", &a.re);
    printf("a.imaginary:: ");
    scanf("%lf", &a.im);
    printf("b.real:: ");
    scanf("%lf", &b.re);
    printf("b.imaginary:: ");
    scanf("%lf", &b.im);

    int ch;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Quit\n");
    printf("Enter your choice:: ");
    scanf("%d", &ch);
    complex temp = {0.0f, 0.0f};
    switch (ch) {
    case 1:
        temp = c_add(a, b);
        break;
    case 2:
        temp = c_subtract(a, b);
        break;
    case 3:

        temp = c_multiply(a, b);
        break;
    case 4:
        temp = c_divide(a, b);
        break;
    default:
        return 0;
    }
    printf("result:: real part:: %lf imaginary part:: %lf", temp.re, temp.im);
    return 0;
}
