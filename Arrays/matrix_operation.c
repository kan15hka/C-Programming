#include <stdio.h>
int rc(int a, int b,int s[100][100])
{
    int i,j,r=0,c=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",s[i][j]);
            r+=s[i][j];
        }
        printf("  %d",r);
        printf("\n");
        r=0;
    }
    printf("\n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            c+=s[j][i];
        }
        printf("%d ",c);
        c=0;
    }
}
int main()
{
    int ra,rb,ca,cb,i,j,k,c,s=0,rs=0,cs=0;
    char ch='y';
    int a[100][100],b[100][100],r[100][100];
    
    printf("\nMatrix A\n");
    printf("Enter A row: ");
    scanf("%d",&ra);
    printf("Enter A coloumn: ");
    scanf("%d",&ca);
    printf("\nEnter elements of Matrix A: \n");  
    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\nMatrix B\n");
    printf("Enter B row: ");
    scanf("%d",&rb);
    printf("Enter B coloumn: ");
    scanf("%d",&cb);
    printf("\nEnter elements of Matrix B: \n");  
    for(i=0;i<rb;i++)
    {
        for(j=0;j<cb;j++)
        {
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("\nMatrix A\n");
    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B\n");
    for(i=0;i<rb;i++)
    {
        for(j=0;j<cb;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    while(ch='y')
    {   
        printf("-------------------------");
        printf("\nMATRIX OPERATIONS:\n");
        printf("-------------------------\n");
        printf("1)Matrix Addition\n");
        printf("2)Matrix Subtraction\n");
        printf("3)Matrix Multiplication\n");
        printf("4)Matrix Row Coloumn Sum\n");
        printf("\n");
        printf("-------------------------\n");
        printf("Enter a choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                printf("1)Matrix Addition\n");
                if((ra==rb) && (ca==cb))
                {
                    for(i=0;i<ra;i++)
                    {
                        for(j=0;j<cb;j++)
                        {
                            r[i][j]=a[i][j]+b[i][j];
                        }
                        printf("\n");
                    }
                    for(i=0;i<ra;i++)
                    {
                        for(j=0;j<ca;j++)
                        {
                            printf("%d ",r[i][j]);
                        }
                    }   
                }
                else
                {
                    printf("Matrix differ in dimension");
                }
                break;
            }
            case 2:
            {
                printf("2)Matrix Subtraction\n");
                if((ra==rb) && (ca==cb))
                {
                    for(i=0;i<ra;i++)
                    {
                        for(j=0;j<cb;j++)
                        {

                            r[i][j]=a[i][j]-b[i][j];
                        }
                    }
                    
                    for(i=0;i<ra;i++)
                    {
                        for(j=0;j<ca;j++)
                        {
                            printf("%d ",r[i][j]);
                        }
                        printf("\n");
                    }   
                }
                else
                {
                    printf("Matrix differ in dimension");
                }
                break;
            }
            case 3:
            {
                printf("3)Matrix Multiplication\n");
                if(rb==ca)
                {
                    for(i=0;i<ra;i++)
                    {
                        for(j=0;j<cb;j++)
                        {

                            for(k=0;k<rb;k++)
                            {
                                s+=a[i][k]*b[k][j];
                            }
                            r[i][j]=s;
                            s=0;
                        }
                    }
                    for(i=0;i<ra;i++)
                    {
                        for(j=0;j<cb;j++)
                        {
                            printf("%d ",r[i][j]);
                        }
                        printf("\n");
                    }   
                }
                else
                {
                    printf("Matrix differ in dimension");
                }
                break;
            }
            case 4:
            {
                printf("4)Matrix Row Coloumn Sum\n");               
                printf("Matrix A\n");
                rc(ra,ca,a);
                printf("\nMatrix B\n");
                rc(rb,cb,b);
                break;
            }
            default:
            {
                printf("Invalid Input");
                break;
            }
        }
        printf("\nWhether u want to continue operations(y|n): ");
        scanf(" %c",&ch);
    }
}


   