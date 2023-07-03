#include <stdio.h>
int main()
{
    int i,l,a[100],k,c=0;
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
    printf("\nSwapped Array Elements:\n");
    for(i=0;i<l;i++)
    {
        if(a[i]!=a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
            i+=1;
            c++;
        }       
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);       
    }
    printf("\n%d",c);
}