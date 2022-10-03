//Count the no.of vowels and consonants in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char *ptr;
    int ctrv=0,ctrc=0;
    printf("Input a String:\n");
    gets(str1);
    ptr = str1;
    while(*ptr != '\0')
    {
        if(*ptr == 'A'||*ptr == 'E'||*ptr == 'I'||*ptr == 'O'||*ptr == 'U'||*ptr == 'a'||*ptr == 'e'||*ptr == 'i'||*ptr == 'o'||*ptr == 'u')
        {
            ctrv++;
        }
        else
        {
            ctrc++;
        }
        ptr++;
    }
    printf("Number of vowels in string: %d\n",ctrv);
    printf("Number of consonants in string: %d",ctrc);
    return 0;
}
/*
Output:-
Input a String:
jaswanth
Number of vowels in string: 2
Number of consonants in string: 6
*/