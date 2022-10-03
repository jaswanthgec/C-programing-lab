//Find mean and variance of a set of numbers
#include<stdio.h>
#include<math.h>
void main()
{
    int a[20],i,n;
    float mean,var,sum=0;
    printf("Enter the number of elements:  ");
    scanf("%d",&n);
    printf("Enter the elements to set:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    mean = sum/n;
    printf("Mean is %f\n",mean);

    for (i=0; i<n; i++)
    {
        sum = sum + pow((a[i]-mean),2);
    }
    var = sum/n;
    printf("Variance is %f",var);  
}
/*
Output:-
Enter the number of elements:  3
Enter the elements to set:
10
20
30
Mean = 20.000000
Variance = 86.666664 
*/