#include <stdio.h>
int factorial();
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",factorial(n));

}
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}