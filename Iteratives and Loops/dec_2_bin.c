#include <stdio.h>
int main()
{
    int a,n,r,m=0,k=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%2;
        a=a/2;
        m=m+r*k;
        k=k*10;
    }
    printf("%d (Decimal) = %d (Binary)",n,m);
}