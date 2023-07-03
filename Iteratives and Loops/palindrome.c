#include <stdio.h>
int main()
{
    int n,m=0,r,a;
    printf("Enter  a number: ");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r = a%10;
        m = m*10 + r;
        a=a/10;
    }
    if(m==n)
    {
        printf("%d is a palindrome",n);
    }
    else
    {
        printf("%d is not a palindrome",n);
    }
}