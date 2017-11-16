#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{   int A[5][5],B[5][5],C[5][5],i,j,m,n,p,q,np;
    printf("Enter Row And Column of 1st matrix .");
    scanf("%d%d",&m,&n);
    printf("Enter Row And Column of 2nd matrix .");
    scanf("%d%d",&p,&q);
    if(n==p)
    printf("\nMATRIX MULTIPLICATION POSSIBLE \n");
    else
    {   printf("\nMATRIX MULTIPLICATION POSSIBLE \n");
        exit(0);
    }

    printf("\nEnter Matrix A");
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   scanf("%d",&A[i][j]);
        }
    }
    printf("\------------------\n");
    printf("\nEnter MAtrix B");
    for(i=0;i<p;i++)
    {   for(j=0;j<q;j++)
        {   scanf("%d",&B[i][j]);
        }
    }
    printf("\------------------\n");
    for(i=0;i<m;i++)
    {   for(j=0;j<p;j++)
        {   C[i][j]=0;
            for(np=0;np<n;np++)
            {   C[i][j]=C[i][j]+A[i][np]*B[np][j];
            }
        }
    }
    printf("\n PRODUCT MATRIX\n");
    for(i=0;i<m;i++)
    {   for(j=0;j<q;j++)
        {   printf("%d ",C[i][j]);
        }
        printf("\n");
        }

return 0;
}
