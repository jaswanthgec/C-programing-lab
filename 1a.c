//Area and perimeter of rectangle
#include<stdio.h>
int main()
{
    int len,breadth,area,perimetre;
    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d",&len,&breadth);
    area = len*breadth;
    perimetre = 2*(len+breadth);
    printf("Area of given Recatngle is %d\n",area);
    printf("Perimetre of given Recatngle is %d\n",perimetre);
    return 0;
}
/*
Output:-
Enter length and breadth of rectangle:
4
5
Area of given Recatngle is 20
Perimetre of given Recatngle is 18
*/
