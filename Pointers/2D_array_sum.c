#include <stdio.h>
int main()
{
    int c=2,r=3,s=0,*p;
    int a[3][2]={{1,2},{4,5},{7,8}};
    for(p=&a[0][0];p<=&a[r-1][c-1];p++)
    {
        
        printf("%d ",*p);
        s++;
        if(s==c)
        {
            printf("\n");
            s=0;
        }
        
        
    }
}