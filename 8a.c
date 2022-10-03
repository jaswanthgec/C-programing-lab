//Print sum of all element in array
#include<stdio.h>
void main()
{
    int *p, a[10], n, i, sum=0;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",(a+i));
    p = a;
    for(i=0; i<n; i++)
    {
        sum = sum + *p;
        p++;
    }
    printf("Sum is %d", sum);
}
/*
Output:-
Enter no.of elements: 5
Enter elements:
1  2  3  4  5
Sum is 15
*/