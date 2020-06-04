#include "complex_no.h"

complex c_add(complex a, complex b) {
    complex temp;
    temp.im = a.im + b.im;
    temp.re = a.re + b.re;
    return temp;
}

complex c_subtract(complex a, complex b) {
    complex temp;
    temp.im = a.im - b.im;
    temp.re = a.re - b.re;
    return temp;
}

complex c_multiply(complex a, complex b) {
    complex temp;
    temp.im = a.re * b.im + a.im * b.re;
    temp.re = a.re * b.re - a.im * b.im;
    return temp;
}

complex c_divide(complex a, complex b) {
    complex temp;
    double d = b.re * b.re + b.im * b.im;
    temp.re = (a.re * b.re + a.im * b.im) / d;
    temp.im = (a.re * b.im - a.im * b.re) / d;
    return temp;
}