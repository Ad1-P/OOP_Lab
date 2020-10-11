#include<stdio.h>

struct complex
{
    float real,imag;
};

int main()
{
    struct complex c1,c2,c3;
    printf("Enter a complex number:\n");
    scanf(" %f %f",&c1.real,&c1.imag);
    printf("Enter a complex number:\n");
    scanf(" %f %f",&c2.real,&c2.imag);
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    printf("The sum is:%.2f +i %.2f",c3.real,c3.imag);
    return 0;
}
