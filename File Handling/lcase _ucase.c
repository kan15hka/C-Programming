#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
    int i;
    char c;
    FILE *fp1,*fp2;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","w");
    if(fp1==NULL)
    {
        printf("The Error value is: %d\n",errno);
        printf("The Error message is: %s\n",strerror(errno));
        exit(EXIT_FAILURE);
    }
    c=getc(fp1);
    while(c!=EOF)
    {
        if((c>=97)&&(c<=122))
        {
            c-=32;
            putc(c,fp2);
        }
        if((c>=65)&&(c<=90))
        {
            c+=32;
            putc(c,fp2);
        }
        c=getc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
}