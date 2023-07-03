#include <stdio.h>
int main()
{
    int n,a,r,i,m=0,c=0,k=1;
    printf("Enter  a number: ");
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
        for(i=r;i>0;i--)
        {
            k=k*i;
        }
        m+=k;
        k=1;
        a=a/10;
    }
    if(m==n)
    {
        printf("%d is a strong number",n);
    }
    else
    {
        printf("%d is not a strong number",n);
    }
}