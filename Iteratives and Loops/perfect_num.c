#include <stdio.h>
int main()
{
    int n,i,k=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            k+=i;
        }
    }
    if(k==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("%d is not a perfect number",n);
    }
}
