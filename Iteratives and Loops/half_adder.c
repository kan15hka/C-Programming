/*Neso Academy
54. (Half Adder Method)Special Programs in C 
Adding Two Numbers Without Using The Plus Operator*/
#include <stdio.h>
int main()
{
    int a,b,p,q,sum,carry;
    printf("Enter number a: ");
    scanf("%d",&p);
    printf("Enter number b: ");
    scanf("%d",&q);
    a=p;b=q;
    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("%d + %d = %d",p,q,sum);
}