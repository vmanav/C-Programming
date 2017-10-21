+#include<stdio.h>
+ +#include<conio.h>
+ +#include<math.h>
+ +int main()
+ +{
+ +    long i,j,n,f=1,c=1;
+ +    float sum=0.0,x,k=1;
+ +    printf("Enter n and x respectively considering following points:-\n");
+ +    printf("1. x should be from 0 to 3.14\n");
+ +    printf("2. n should be from 1 to 15\n");
+ +    printf("3. if you are taking value of x more than 1 it is advised to take n greater than 10 for more pricision\n");
+ +    scanf("%ld%f",&n,&x);
+ +    for(i=1;i<=n;i++)
+ +    {
+ +        f=f*i;
+ +        k=k*x;
+ +        printf("%ld\t%f\t",f,k);
+ +        if((c%2)==0)
+ +        {
+ +            sum=sum -(k/f);printf("1\n");
+ +        }
+ +        if((c%2)==1)
+ +        {
+ +            sum=sum +(k/f);printf("0\n");
+ +        }
+ +        c++;
+ +    }
+ +        printf("sin(%f)=%f",x,sum);
+ +        return 0;
+ +}
