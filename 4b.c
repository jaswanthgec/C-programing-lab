//Print an Inverted half pyramid using numbers
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter no.of lines:");
    scanf("%d",&n);
    printf("Inverted pyramid of %d lines\n",n);
    for(i=n;i>=1;i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
/*
Output:-
Enter no.of lines: 5
Inverted pyramid of 5 lines
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1
*/