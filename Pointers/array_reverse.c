#include <stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a length: ");
    scanf("%d",&n);
    int a[n],*p;
    for(p=a;p<a+n;p++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",p);
        i++;
    }
    for(p=a+n-1;p>=a;p--)
    {
        printf("%d ",*p);
      
    }
}