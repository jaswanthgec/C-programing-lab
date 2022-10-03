//GCD of two numbers using reccursion
#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("\n\nEnter two numbers to find GCD :\n");
    scanf("%d%d", &a,&b);
    printf("GCD of %d and %d is %d\n", a,b,gcd(a,b));
    return 0;
}
/*
Output:-
Enter two numbers to find GCD :
5 7
GCD of 5 and 7 is 1
*/