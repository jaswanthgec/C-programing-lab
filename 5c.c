//Mutipication of 2-D matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k,sum;
    printf("Enter the no.of rows and columns of Matrix A: \n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the no.of rows and colomns of Matrix B: \n");
    scanf("%d%d",&r2,&c2);
    if((r1 !=  c2) ||(r2 != c1))
    {
        printf("Multiplication is not possible!");
        exit(0);
    }
    printf("Enter the elements to Matrix A:\n");
    for (i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements to Matrix B:\n");
    for (i=0; i<r1; i++)
    {
        for(j =0; j<c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Multiplication of Matrix A and Matrix B : \n");
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            mul[i][j] = 0;
            for (k=0;k<r2;k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
        }
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c2;j++)
        {
            printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*Output:-
Enter the no.of rows and columns of Matrix A:
2 2 
Enter the no.of rows and columns of Matrix B:
2 2 
Enter the first matrix element = 
1 2
3 4
Enter the second matrix element = 
5 6
7 8
Matrix multiplication is possible
19 22
43 50
*/