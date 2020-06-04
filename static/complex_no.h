struct complex {
    double re; // real part
    double im; // imaginarty part
};
typedef struct complex complex;

complex c_add(complex, complex);
complex c_subtract(complex, complex);
complex c_multiply(complex, complex);
complex c_divide(complex, complex);