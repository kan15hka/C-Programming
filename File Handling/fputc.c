#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;
    char str[]="Hello World";
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("EOF Error!!!");
    }
    for(i=0;str[i]!='\0';i++)
    {
        fputc(str[i],fp);
    } 
    fclose(fp);
}