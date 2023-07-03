#include <stdio.h>
int main()
{
    int l,i,j,k,c,el,in,ei;
    char ch='y';
    int a[100];
    printf("Enter length: ");
    scanf("%d",&l);
    printf("\nEnter elements of the array: \n");  
    for(i=0;i<l;i++)
    {
        printf("Element[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray Elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);       
    }
    printf("\n");
    while(ch='y')
    {   
        printf("-------------------------");
        printf("\nARRAY OPERATIONS:\n");
        printf("-------------------------\n");
        printf("1)Insert Element\n");
        printf("2)Delete Element\n");
        printf("3)Ascending sort\n");
        printf("4)Descending sort\n");
        printf("\n");
        printf("-------------------------\n");
        printf("Enter a choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                printf("\n#Insert element\n");
                printf("Enter element: ");
                scanf("%d",&el);
                printf("Enter index: ");
                scanf("%d",&in);
                for(i=l;i>=in;i--)
                {
                    a[i+1]=a[i];
                }
                a[in]=el;
                l+=1;
                printf("\nArray Elements after Insertion:\n");
                for(i=0;i<l;i++)
                {
                    printf("%d ",a[i]);       
                }
                break;
            }
            case 2:
            {
                printf("\n#Delete element\n");
                printf("\n11)Enter element\n12)Enter index\n");
                printf("Enter a choice: ");
                scanf("%d",&ei);
                switch(ei)
                {
                    case 11:
                    {
                        printf("Enter element: ");
                        scanf("%d",&el);
                        l-=1;
                        for(i=0;i<l;i++)
                        {
                            
                            if(a[i]==el)
                            {
                                for(j=i;j<l;j++)
                                {
                                    a[j]=a[j+1];
                                }
                                
                            }
                        }
                        printf("\nArray Elements after Deletion:\n");
                        for(i=0;i<l;i++)
                        {
                            printf("%d ",a[i]);       
                        }
                        break;
                    }
                    case 12:
                    {
                        printf("Enter index: ");
                        scanf("%d",&in);
                        l-=1;
                        for(i=0;i<l;i++)
                        {
                            if(i==in)
                            {
                                for(j=i;j<=l;j++)
                                {
                                    a[j]=a[j+1];
                                }
                                
                            }
                        }
                        printf("\nArray Elements after Deletion:\n");
                        for(i=0;i<l;i++)
                        {
                            printf("%d ",a[i]);       
                        }
                        break;
                    }
                    default:
                    {
                        printf("Invalid Input");
                        break;
                    }
                    
                }
                break;
            }
            case 3:
            {
                printf("\n#Ascending sort\n");
                for(i=0;i<l;i++)
                {
                    for(j=i+1;j<l;j++)
                    {
                        if(a[j]<a[i])
                        {
                            k=a[i];
                            a[i]=a[j];
                            a[j]=k;
                        }
                    }
                }
                printf("\nAscending Array Elements:\n");
                for(i=0;i<l;i++)
                {
                    printf("%d ",a[i]);       
                }
                break;
            }
            case 4:
            {
                printf("\n#Descending sort\n");
                for(i=0;i<l;i++)
                {
                    for(j=i+1;j<l;j++)
                    {
                        if(a[j]>a[i])
                        {
                            k=a[i];
                            a[i]=a[j];
                            a[j]=k;
                        }
                    }
                }
                printf("\nDescending Array Elements:\n");
                for(i=0;i<l;i++)
                {
                    printf("%d ",a[i]);       
                }
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


   