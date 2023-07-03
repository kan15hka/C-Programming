#include <stdio.h>
int main()
{
    int b,e,p,k=1;
    double l=1.0;
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter exponent: ");
    scanf("%d",&p);
    e=p;
    if(e>0)
    {
        while(e!=0)
        {
            k=k*b;
            e--;
        } 
        printf("%d^%d = %d",b,p,k);  
    }
    else
    {
        while(e!=0)
        {
            l=l*(1.0/b);
            e++;
        } 
        printf("%d^%d = %.10f ",b,p,l);
    }
   
}