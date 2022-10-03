//Create a Structure to read and display the name, salary &Address of an employee
#include<stdio.h>
struct emp
{
    char name[100];
    float salary;
    struct address
    {
        int dno;
        char city[20];
    }add;
}emp;
void main()
{
    printf("Enter Name: \n");
    scanf("%s", emp.name);
    printf("Enter Salary: \n");
    scanf("%f", &emp.salary);
    printf("Enter dno: \n");
    scanf("%d", &emp.add.dno);
    printf("Enter City: \n");
    scanf("%s", emp.add.city);
    printf("\n");
    printf("Employee Details:\n");
    printf("Name: %s\nSalary: %.2f\nDoor.no: %d\nCity: %s\n",emp.name,emp.salary,emp.add.dno,emp.add.city);
}
/*
Output:-
Enter Name: 
jaswanth
Enter Salary: 
500000
Enter dno: 
57
Enter City: 
Germany

Employee Details:
Name: Rohit
Salary: 500000.00
Door.no: 51
City: Germany
*/