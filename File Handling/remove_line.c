#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
    int i,l,n=1;
    char c;
    FILE *fp1,*fp2;
    fp1=fopen("file1.txt","r");
    if(fp1==NULL)
    {
        printf("The Error value is: %d\n",errno);
        printf("The Error message is: %s\n",strerror(errno));
        exit(EXIT_FAILURE);
    }
    c=getc(fp1);
    while(c!=EOF)
    {
        printf("%c",c);
        c=getc(fp1);
    }
    printf("\nEnter the line number to remove: ");
    scanf("%d",&l);
    fp2=fopen("file2.txt","w");
    rewind(fp1);
    c=getc(fp1);
    while(c!=EOF)
    {
        if(c=='\n')
        {
            n++;
        }
        if(n!=l)
        {
            putc(c,fp2);
        }
        c=getc(fp1);

    }
    fclose(fp2);
}