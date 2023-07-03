#include <stdio.h>  
int main ()  
{  
    int a[20], i, j, k, l;  
    printf ("Enter length: ");
    scanf("%d", &l);  
    printf("\nEnter elements of the array: \n");  
    for(i=0;i<l;i++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<l;i++)  
    {  
        for (j=i+1;j<l; j++)  
        {  
            if ( a[i] == a[j])  
            {  
                for ( k = j; k < l - 1; k++)  
                {  
                    a[k] = a [k + 1];  
                }  
                l--;                
                j--;      
            }  
        }  
    }  
    printf ("\nArray without duplicate elements: \n ");  
    for ( i = 0; i < l; i++)  
    {  
        printf ("%d ", a[i]);  
    }  
    return 0;  
}  