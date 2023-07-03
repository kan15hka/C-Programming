#include <stdio.h>
int *findmid(int a[100],int l)
{
    return &a[l/2];
}
int main()
{
    int l,i,a[100];
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
    int *mid=findmid(a,l);
    printf("\nMid element: %d",*mid);
}