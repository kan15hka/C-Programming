#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
    int n;
    FILE *fp;
    fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("The Error value is: %d\n",errno);
        printf("The Error message is: %s\n",strerror(errno));
        exit(EXIT_FAILURE);
    }
    fseek(fp,0,SEEK_END);
    n=ftell(fp);
    printf("File size: %d bytes",n);
    fclose(fp);
}