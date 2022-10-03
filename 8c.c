//Sum of n elements entered by user malloc function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int i,n,sum=0;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    if (a==NULL)
    {
        printf("Insufficient Memory (or) Unable to process");
        exit(0);
    }
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        printf("Enter elements %d: ", i+1);
        scanf("%d",(a+i));
        sum += *(a+i);
    }
    printf("Sum of all elements is %d",sum);
    return 0;
}
/*
Output:-
Enter no.of elements: 3
Enter 3 elements:
Enter elements 1: 2
Enter elements 2: 5
Enter elements 3: 8
Sum of all elements is 15
*/
