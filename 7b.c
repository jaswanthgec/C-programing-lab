//kth largest element of an array
#include<stdio.h>
int kl(int ar[], int n, int k)
{
    int i, j, temp;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-1; j++)
        {
            if(ar[j] < ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    return ar[k-1];
}
int main()
{
    int ar[50], i, size, k, large;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    printf("Enter %d elements into the array:\n", size);
    for(i=0; i<size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Enter which position of largest element is required: ");
    scanf("%d", &k);
    large = kl(ar,size,k);
    printf("%d largest element in array is %d", k, large);
    return 0;
}
/*
Enter the size of an array: 3
Enter 3 elements into the array:
Element 1: 4
Element 2: 5
Element 3: 6
Enter which position of largest element is required: 2
2 largest element in array is 5
*/
