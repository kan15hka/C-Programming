#include <stdio.h>
#include <string.h>
typedef struct employee{
    int id;
    char name[100];
    float sal;
}emp;
int main()
{
    emp e[100];
    char ch='y',*str;
    int i=0,j;
    while(ch=='y')
    {
        printf("\nEmployee %d\n",i+1);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("Name: ");
        scanf("%s",&e[i].name);
        printf("Salary: ");
        scanf("%f",&e[i].sal);
        i+=1;
        printf("Enter more? (y/n): ");
        scanf(" %c",&ch);
    }
    printf("------------------------------");
    for(j=0;j<i;j++)
    {
        printf("\nEmployee %d\n",j+1);
        printf("Id: %d\n",e[j].id);
        printf("Name: %s\n",e[j].name);
        printf("Salary: %f\n",e[j].sal);
    }
    printf("------------------------------");

}