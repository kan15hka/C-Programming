#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
    int i,mark,n;
    char name[100];
    FILE *fp;
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("The Error value is: %d\n",errno);
        printf("The Error message is: %s\n",strerror(errno));
        exit(EXIT_FAILURE);
    }
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("------------------------------");
        printf("Enter name: ");
        scanf("%s",name);
        printf("Enter marks: ");
        scanf("%d",&mark);
        printf("------------------------------");
        fprintf(fp,"Name: %s | Marks: %d\n",name,mark);
    }
    fclose(fp);
}