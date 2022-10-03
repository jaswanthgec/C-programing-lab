//Insert Sub string into Main string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int begin,end,mid,length=0,i=0;
    printf("\nEnter the String: ");
    gets(a);  //it will read the string
    while (a[i] != '\0')
    {
        length++;
        i++;
    }
    end = length -1;
    mid = length /2;
    for(begin =0; begin<mid;begin++)
    {
        if (a[begin] != a[end])
        {
            printf("%s is NOT PALINDROME",a);
            break;
        }
        end--;
    }
    if (begin == mid)
    printf("%s is PALINDROME",a);
    return 0;
}
/* 
Output:-
Enter the String: amma
amma is PALINDROME
*/