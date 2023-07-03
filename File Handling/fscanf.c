#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;
    char str[100];
    fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("EOF Error!!!");
    }
    fscanf(fp,"%s",str);
    printf("%s",str);
    fclose(fp);
}