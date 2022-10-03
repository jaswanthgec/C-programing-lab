//Structure to display the name, marks in 5 subjects & total marks
#include<stdio.h>
struct student
{
    char name[100];
    int m1,m2,m3,m4,m5,tot;
}s[10];
void main()
{
    int n,i;
    printf("Enter no.of students: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter Name,m1,m2,m3,m4,m5,m6 of student: %d\n", i+1);
        scanf("%s%d%d%d%d%d", s[i].name,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
    }
    for(i=0; i<n; i++)
    {
        s[i].tot = s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
    }
    printf("Details of %d students:\n", n);
    for(i=0; i<n; i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5,s[i].tot);
        printf("\n");
    }
}
/*
Output:-
Enter no.of students: 2
Enter Name,m1,m2,m3,m4,m5,m6 of student: 1
Rohit 10 9 9 9 8 
Enter Name,m1,m2,m3,m4,m5,m6 of student: 2
Jassu 9 10 9 8 9
Details of 2 students:
Rohit   10       9       9       9       8       45
Jassu   9       10       9       8       9       45
*/