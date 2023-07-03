#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) 
{
    char line[10][128];
	char fname[20],s[100];
    FILE *fptr = NULL; 
    int i = 0,j,k,n;
    int tot = 0;
    fptr = fopen("file.dat", "r");
    while(fgets(line[i], 128, fptr)) 
	{
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    tot = i;
	printf("\n The content of file\n");    
    for(i = 0; i < tot; ++i)
    {
        printf(" %s\n", line[i]);
    }
    for(i = 0; i < tot; ++i)
    {
        for(j=i+1;j<tot;j++)
        {
            n=strcmp(line[j],line[i]);
            if(n==-1)
            {
                strcpy(s,line[i]);
                strcpy(line[i],line[j]);
                strcpy(line[j],s);

            }
            
        }
        
    }
    printf("\n");
    for(i = 0; i < tot; ++i)
    {
        printf(" %s\n", line[i]);
    }
    
    printf("\n");
    return 0;
}
