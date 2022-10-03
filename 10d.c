//Division of two complex numbers using structure
#include<stdio.h>
typedef struct complex 
{
    float real;
    float imag; 
}comp;
comp div(comp n1,comp n2)
{
    comp temp;
    temp.real = ((n1.real*n2.real) + (n1.imag*n2.imag))/((n2.real)*(n2.real) + ((n2.imag)*(n2.imag)));
    temp.imag = ((n2.real*n1.imag) - (n1.real*n2.imag))/((n2.real)*(n2.real) + ((n2.imag)*(n2.imag)));
    return(temp);
}
int main()
{
    comp n1,n2,result;
    printf("Enter real and imaginary parts of 1st comlpex number: ");
    scanf("%f%f", &n1.real,&n1.imag);
    printf("Enter real and imaginary parts of 2nd comlpex number: ");
    scanf("%f%f", &n2.real,&n2.imag);
    result = div(n1,n2);
    printf("Division = %.1f + i%.1f", result.real,result.imag);
    return 0;
}
/*
Output:-
Enter real and imaginary parts of 1st comlpex number: 1 2
Enter real and imaginary parts of 2nd comlpex number: 1 2
Division = 1.0 + i0.0
*/