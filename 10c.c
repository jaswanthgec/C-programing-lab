//Multiplication of two complex numbers using structure
#include<stdio.h>
typedef struct complex 
{
    float real;
    float imag; 
}comp;
comp mul(comp n1,comp n2)
{
    comp temp;
    temp.real = (n1.real*n2.real) - (n1.imag*n2.imag);
    temp.imag = (n1.real*n2.imag) + (n2.real*n1.imag);
    return(temp);
}
int main()
{
    comp n1,n2,result;
    printf("Enter real and imaginary parts of 1st comlpex number: ");
    scanf("%f%f", &n1.real,&n1.imag);
    printf("Enter real and imaginary parts of 2nd comlpex number: ");
    scanf("%f%f", &n2.real,&n2.imag);
    result = mul(n1,n2);
    printf("Multiplication = %.1f + i%.1f", result.real,result.imag);
    return 0;
}
/*
Output:-
Enter real and imaginary parts of 1st comlpex number: 4 1
Enter real and imaginary parts of 2nd comlpex number: 5 1
Multiplication = 19.0 + i9.0
*/