//Check whether a number is Armstrong or not
#include<stdio.h>
int main()
{
    int n,sum=0,temp,remainder;
    printf("Enter a number:\n");
    scanf("%d",&n);
    temp = n;
    while(n !=0)
    {
        remainder  = n%10;
        sum = sum + (remainder*remainder*remainder);
        n = n/10;
    }
    if(temp == sum)
        printf("Given Number is Armstrong\n");
    else
        printf("Number is not Armstrong\n");
}
/*
Output:-
Enter a number:
153
Number is Armstrong
*/