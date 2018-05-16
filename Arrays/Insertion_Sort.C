
#include<stdio.h>
#include<conio.h>
int main()
{   int size=10;
    int temp,min,A[size],i,n,j,key;
    printf("Enter The Size :");
    scanf("%d",&n);
    printf("\n\nEnter The Array now :");
    for(i=0;i<n;i++)
    {   scanf("%d",&A[i]);
    }
    printf("\nEntered Array :\t");
    for(i=0;i<n;i++)
    {   printf("%d ",A[i]);
    }
   for (i = 1; i < n; i++)
   {
       key = A[i];
       j = i-1;
             /* Move elements of A[0..i-1], that are
          greater than key, to one position ahead
          of their current position */

    while (j >= 0 && A[j] > key)
       {
           A[j+1] = A[j];
           j = j-1;
       }
       A[j+1] = key;
   }
    printf("\nSorted Array :\t");
    for(i=0;i<n;i++)
    {   printf("%d ",A[i]);
    }


        return 0;
}
