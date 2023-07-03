#include <stdio.h>
#define a 5
#define area_square(a) (a*a)
#define area_square1(a) ((a)*(a))
int main()
{
    int a1=3;
    printf("1.Area of square=%d\n",area_square(a));
    printf("2.Area of square=%d\n",area_square(a1));
    printf("3.Area of square=%d\n",area_square1(a1+1));
    printf("4.Area of square=%d\n",area_square(a1+1));
}