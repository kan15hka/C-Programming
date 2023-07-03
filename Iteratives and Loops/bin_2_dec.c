#include <stdio.h>
int main()
{
    int n,a,r,i,k=1,l=0,m=0,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        c+=1;
        a=a/10;
    }
    a=n;
    while(a!=0)
    {
        r=a%10;
        m=r*k;
        k=k*2;
        l+=m;
        a=a/10;
    }
    printf("%d (Binary) = %d (Decimal)",n,l);
}