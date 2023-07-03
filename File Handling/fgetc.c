#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;
    char c;
    fp=fopen("file.txt","r");
    for(i=0;c!=EOF;i++)
    {
        c=fgetc(fp);
        printf("%c",c);
    } 
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
        {
            break;
        }
        printf("%c",c);
    } 
    fclose(fp);
}