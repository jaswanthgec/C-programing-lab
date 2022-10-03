//maximum and minimum of 3 numbers (terinary operator)
#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("Enter a,b,c values:\n");
    scanf("%d%d%d", &a,&b,&c);
    max= (a<b&&a<c)?a:(b<c)?b:c;
    min= (a>b&&a>c)?a:(b>c)?b:c;
    printf("Maximum of 3 numbers is %d \n",max);
    printf("Minimum of 3 numbers is %d \n",min);
    return 0;
}
/*
Output:-
Enter a,b,c values:
51
53
57
Maximum of 3 numbers is 57
Minimum of 3 numbers is 51
*/