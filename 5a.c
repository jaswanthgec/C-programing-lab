//All Unique elements of an array
#include<stdio.h>
void main()
{
    int n,a[100],count=0;
    int i,j,k;
    printf("Enter the no.of elements: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for ( i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Unique element found in array :");
    for ( i=0; i<n ; i++)
    {
        count =0;
        for (j=0,k=n; j<k+1; j++)
        {
            if(i != j)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
        }
        if (count==0)
        {
            printf("%d",a[i]);
        }
    }
}
/* 
Output:-
Enter the no.of elements: 5
Enter array elements:
51
53
57
53
57
Unique element found in array :51
*/