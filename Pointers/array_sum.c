#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int l,s=0;
    l=sizeof(a)/sizeof(a[0]);

//pointer to an array
    int *p;
    for(p=&a[0];p<&a[l];p++)
    {
        s+=*p;
    }
    printf("Sum: %d\n",s);

//array name as pointer
    s=0;
    for(p=a;p<a+l;p++)
    {
        s+=*p;
    }
    printf("Sum: %d",s);
}