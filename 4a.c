//Print n terms of harmonic series and their sum
#include<stdio.h>
void main()
{
    int n,i;
    float sum = 0;
    printf("Enter n:\n");
    scanf("%d",&n);
    while(i<n)
    {
        if (i<n)
        {
            printf("1/%d +",i);
            sum += 1/(float)i;
        }
        if (i==n)
        {
            printf("1/%d ",i);
            sum += 1/(float)i;
        }
        i++;
    }
    printf("\nSum of Harmonic series upto %d is %f\n",n,sum);
}

/*
Output:-
Enter n
5
1/1 +1/2 +1/3 +1/4 +1/5 
Sum of Harmonic series upto 5 is 2.283334
*/