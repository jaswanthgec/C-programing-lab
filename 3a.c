//Reversing an integer number
#include<stdio.h>
void main()
{
    int n,reverse=0,remainder;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder = n%10;
        reverse = (reverse*10)+remainder;
        n =n/10;
    }
    printf("Reverse is %d",reverse);
}
/*
Output:-
Enter a number:
51
Reverse is 15
*/