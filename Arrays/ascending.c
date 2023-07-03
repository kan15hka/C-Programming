#include <stdio.h>
int main()
{
    int l,i,j,k;
    int a[100];
    printf("Enter length: ");
    scanf("%d",&l);
    printf("\nEnter elements of the array: \n");  
    for(i=0;i<l;i++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);       
    }

    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[j]<a[i])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("\nAscending Array Elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);       
    }
}
 