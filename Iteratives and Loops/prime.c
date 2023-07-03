#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b,c=0,i;
    printf("Enter  a number: ");
    scanf("%d",&n);
    a= ceil(sqrt(n));
    b=n;
    for(i=2;i<=a;i++)
    {
        if(b%i==0)
        {
            c=1;
        }
    }
    if((c=0 && b!=1) || b!=2 || b!=3 )
    {
        printf("%d is prime",b);
    }
    else
    {
        printf("%d is not prime",b);
    }
}