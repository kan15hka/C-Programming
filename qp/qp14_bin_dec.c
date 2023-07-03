#include <stdio.h>
void bin(int n)
{
    int a,r;
    a=n;
    r=a%2;
    printf("%d ",r);
    if(a==0)
    {
        return;
    }
    bin(a/2);
    printf("\n%d ",a);

}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    bin(n);
}