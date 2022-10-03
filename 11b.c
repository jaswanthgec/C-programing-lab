//Count the no.of characters, words and lines in a given txt file.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fr;
    char fname[100], ch;
    int noc=0, now=0, nol=0;
    printf("Enter file name: ");
    gets(fname);
    fr = fopen(fname,"r");
    if(fr == NULL)
    {
        printf("\nERROR");
    }
    else
    {
        while((ch=fgetc(fr)) != EOF)
        {
            if(ch!= ' ' && ch!= '\n')
                noc++;
            if(ch== ' '|| ch== '\n')
                now++;
            if(ch== '\n')
                nol++;
        }
        if (ch>0)
        {
            now++;
            nol++;
        }
        printf("No.of Characters = %d",noc);
        printf("\nNo.of Words = %d",now);
        printf("\nNo.of Lines = %d\n",nol);
    }
    fclose(fr);
}
/*
Output:-
Enter file name: myfile.txt
No.of Characters = 286
No.of Words = 51
No.of Lines = 12
*/