#include <stdio.h>
int minmax(int l,int a[100],int *pmin,int*pmax)
{
    int i;
    *pmin=*pmax=a[0];
    for(i=0;i<l;i++)
    {
        if(a[i]<*pmin)
        {
            *pmin=a[i];
        }
        if(a[i]>*pmax)
        {
            *pmax=a[i];
        }
    }
}
int main()
{
    int l,i,a[100],min,max;
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
    minmax(l,a,&min,&max);
    printf("\nMinimum: %d",min);
    printf("\nMaximum: %d\n",max);
}