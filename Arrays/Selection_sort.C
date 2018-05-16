
#include<stdio.h>
#include<conio.h>
int main()
{   int size=10;
    int temp,min,A[size],i,n,j,pos=-1;
    printf("Enter The Size :");
    scanf("%d",&n);
    printf("\n\nEnter The Array now :");
    for(i=0;i<n;i++)
    {   scanf("%d",&A[i]);
    }
       printf("\nEntered Array :\n");
    for(i=0;i<n;i++)
    {   printf("%d",A[i]);
    }
    for(i=0;i<n-1;i++)
    {   min=A[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {   if(min>A[j])
            {   min=A[j];
                pos=j;
            }
        }
        temp=A[i];
        A[i]=A[pos];
        A[pos]=temp;
    }
    printf("\nSorted Array  -");
    for(i=0;i<n;i++)
    {   printf("%d",A[i]);
    }


        return 0;
}
