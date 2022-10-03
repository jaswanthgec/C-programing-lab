//Pascal triangle based on rows
#include<stdio.h>
void main()
{
    int rows, coef = 1, space, i, j;
    printf("Enter no.of rows: ");
    scanf("%d",&rows);
    printf("Pascal triangle is");
    for(i=0;i<rows;i++)
    {
        for(space = 1;space <= rows-i; space++)
        {
            printf(" ");
        }
        for(j=0; j <= i; j++)
        {
        if(j==0||i==0)
            coef=1;
        else
            coef = coef*(i-j+1)/j;
            printf("%4d",coef);
        }
        printf("\n");
    }  
}
/*
Output:-
Enter no.of rows: 5
Pascal triangle of 5 lines
        1
       1   1
      1   2   1
     1   3   3   1
    1   4   6   4   1
*/