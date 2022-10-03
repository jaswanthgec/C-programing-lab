//Subraction of two complex numbers using structure
#include<stdio.h>
typedef struct complex 
{
    float real;
    float imag; 
}comp;
comp sub(comp n1,comp n2)
{
    comp temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return(temp);
}
int main()
{
    comp n1,n2,result;
    printf("Enter real and imaginary parts of 1st comlpex number: ");
    scanf("%f%f", &n1.real,&n1.imag);
    printf("Enter real and imaginary parts of 2nd comlpex number: ");
    scanf("%f%f", &n2.real,&n2.imag);
    result = sub(n1,n2);
    printf("Difference = %.1f + %.1fi", result.real,result.imag);
    return 0;
}
/*
Output:-
Enter real and imaginary parts of 1st comlpex number: 5 1
Enter real and imaginary parts of 2nd comlpex number: 4 5
Difference = 1.0 + -4.0i
*/