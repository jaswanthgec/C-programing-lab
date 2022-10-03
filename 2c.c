//Arithmetic operations using switch case statement
#include<stdio.h>
void main()
{
    int a,b,result;
    char ch;
    printf("Enter Operator:\n");
    scanf("%c",& ch);
    printf("Enter 2 Operands:\n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
    case '+': result = a+b;
        printf("Addition of 2 numbers is %d",result);
        break;
    case '-': result = a-b;
        printf("Substraction of 2 numbers is %d",result);
        break;
    case '*': result = a*b;
        printf("Multiplication of 2 numbers is %d",result);
        break;
    case '/': result = a/b;
        printf("Division of 2 numbers is %d",result);
        break;
    case '%': result = a%b;
        printf("Modulo of 2 numbers is %d",result);
        break;
    default: printf("Enter a valid operator!");
        break;
    }
}
/*
Output:-
Enter Operator:
+
Enter 2 Operands:
5
9
Addition of 2 numbers is 14
*/