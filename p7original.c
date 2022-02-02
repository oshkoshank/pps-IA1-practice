#include<stdio.h>
typedef struct complex_number
{
    float real;
    float imiginary;
}Complex;

Complex input_complex();
Complex add();
void output ();

int main()
{
    Complex a = input_complex();
    Complex b = input_complex();
    Complex res=add(a,b);
    output(a,b,res);
    return 0;
}
Complex input_complex()
{
    Complex a;
    printf("Enter the Real part of complex number: ");
    scanf("%f",&a.real);
    printf("Enter the imiginary part of complex number: ");
    scanf("%f",&a.imiginary);
    return (a);
}
Complex add(Complex a, Complex b)
{
    Complex c;
    c.real=(a.real)+(b.real);
    c.imiginary=(b.imiginary)+(a.imiginary);
    return c;
}

void output (Complex a, Complex b , Complex c)
{
    printf("%.1f + %.1fi + %.1f + %.1fi = %.1f + %.1fi",a.real,a.imiginary,b.real,b.imiginary,c.real,c.imiginary);
}