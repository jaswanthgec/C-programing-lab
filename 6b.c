//
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[30],str2[20],str3[50];
    int i,j,k,p;
    printf("\nEnter Main String: ");
    gets(str1);
    printf("Enter Substring:");
    gets(str2);
    printf("Enter position: ");
    scanf("%d",&p);
    for(i=0; i<p; i++)
    {
        str3[i] = str1[i];
    }
    for(j=0; str2[j] != '\0'; j++)
    {
        str3[i++] = str2[j];
    }
    for(k=p-1; str1[k] != '\0'; k++)
    {
        str3[i++] = str1[k];
    }
    str3[i] = '\0';
    printf("Final string is %s\n", str3);
}
/*
Output:- 
Enter Main String: Manish
Enter Substring: 53
Enter position: 6
Final string is Manish53
*/