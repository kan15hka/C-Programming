#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;
    char str[100];
    fp=fopen("file.txt","r");
    fgets(str,6,fp);
    printf("%s",str);
    fclose(fp);
}