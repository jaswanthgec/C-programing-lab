//Area of triangle using heron's formula
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float p,area;
    printf("Enter a,b,c values:\n");
    scanf("%d%d%d",&a,&b,&c);
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Area of Triangle is %f\n",area);
    return 0;
}
/*
Output:-
Enter a,b,c values:
5
5
5
Area of Triangle is 7.483315
*/
