//convert Decimal number to Binary number
#include<stdio.h>
long dtob(int d)
{
    long int b=0;
    int rem, temp=1;
    while(d != 0)
    {
        rem = d%2;
        d = d/2;
        b = b+rem*temp;
        temp = temp*10;
    }
    return b;
}
int main()
{
    int d;
    printf("Enter a decimal number:\n");
    scanf("%d", &d);
    printf("Equivalent binary number is %ld \n", dtob(d));
    return 0;
}
/*
Output:-
Enter a decimal number: 57
Equivalent binary number is 111001 
*/