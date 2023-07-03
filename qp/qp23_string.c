#include <stdio.h>
#include <string.h>

char nonum(char str[100])
{
    int l,i,j;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            for(j=i;j<l-1;j++)
            {
                str[j]=str[j+1];
            }
            str[l-1]='\0';
            l--;
            i--;
        }
    }
    printf("%s",str);
}
int main()
{
    char str[100],k;
    char *p;
    printf("Enter a string: ");
    gets(str);
    nonum(str);
    
}