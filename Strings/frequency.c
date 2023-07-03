#include <stdio.h>
int main()
{
    char str[100],c;
    int i,j,k=0,l=0,a[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        l++;
        a[i]=1;
    }
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(str[j]==str[i])
            {
                a[j]=0;
                c++;
            }
        }
        if(a[i]!=0)
        {
            a[i]=c;
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!=0)
        {
            printf("element[ %c ]:  %d times\n",str[i],a[i]);
        }
    }
    for(i=0;i<l;i++)
    {

        for(j=i+1;j<l;j++)
        {
            if(str[j]==str[i])
            {
                for (k=j;k<l-1;k++)  
                {  
                    str[k] = str[k + 1];  
                }  
                l--;                
                j--; 
            }
        }
    }
    printf("\nString without Duplicate elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%c ",str[i]);       
    }
}