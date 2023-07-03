#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("file.txt","a");
    if(fp==NULL)
    {
        printf("EOF Error!!!");
    }
    printf("Enter a string: ");
    scanf("%s",&str);
    fprintf(fp,"%s",str);
}