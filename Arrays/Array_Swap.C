#include<stdio.h>
#include<conio.h>
int main()
{   int A[10],n,i,j,temp,k;
    printf("\n enter the size");
    scanf("%d",&n);
    printf("\n enter array");
    for(i=0;i<n;i++)
    {   scanf("%d",&A[i]);
    }
    //now swapping
    if(n%2==0) // EVEN Elements
    {   k=n-1;
        for(i=0,j=k;i<=(k/2),j>(k/2);i++,j--)
        {   temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    else // Odd Elements
    {   k=n-1;
        for(i=0,j=k;i<(k/2),j>(k/2);i++,j--)
        {   temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }

    for(i=0;i<n;i++)
    {   printf("\t%d",A[i]);
    }
 printf("");
    return 0;
}
