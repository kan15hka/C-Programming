#include <stdio.h>
int main()
{
    int l,i,j,c,k;
    int a[100],b[100];
    printf("Enter length: ");
    scanf("%d",&l);
    printf("\nEnter elements of the array: \n");  
    for(i=0;i<l;i++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    printf("\nArray Elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);       
    }

    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(a[j]==a[i])
            {
                c++;
                for (k=j;k<l-1;k++)  
                {  
                    a[k] = a [k + 1];  
                }  
                l--;                
                j--;   
            }
        }
        b[i]=c;        
    }
    printf("\nArray without Duplicate elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);       
    }

    printf("\n\nFrequency\n");
    for(i=0;i<l;i++)
    {
        printf("Element[%d]: %d : %d times\n",i,a[i],b[i]);
        
    }
}