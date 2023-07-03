#include <stdio.h>
int f1();//Tail Recursive
void f2();//Non-Tail Recursive
int main()
{
    int n,a,b;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n;b=n;
    printf("%d ",f1(a));
    printf("\n");
    f2(b);

}
int f1(int n)//Tail Recursive
{
    if(n==1)
    {
        return 1;
    }
    else
    {   
        printf("%d ",n);
    }
    return f1(n-1);
}
void f2(int n)//Non-Tail Recursive
{
    if(n==0)
    {
        return;
    }
    f2(n-1);
    printf("%d ",n);
}