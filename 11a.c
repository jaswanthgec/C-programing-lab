//Copy contents of one file to another file
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fs,*ft;
    char ch,fname1[20],fname2[20];
    printf("\nEnter source file name: ");
    gets(fname1);
    printf("\nEnter destination file name: ");
    gets(fname2);
    fs = fopen(fname1,"r");
    ft = fopen(fname2,"w");
    if(fs == NULL || ft == NULL)
    {
        printf("Unable to open");
        exit(0);
    }
    do
    {
        ch = fgetc(fs);
        fputc(ch,ft);
    } while (ch != EOF);
    fcloseall();
    printf("\nFile copied successfully");
}
/*
Output:-
Enter source file name: Index.md

Enter destination file name: Index2.md

File copied successfully
*/