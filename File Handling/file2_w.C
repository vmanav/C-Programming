#include<stdio.h>
#include<stdlib.h>
struct ayush{
    char name[15];
    int roll;
    int std;
    };
int main()
{   int i,n;
    struct ayush obj;
    FILE *f1;
    printf("\t Enter Number 'n' \n");
    scanf("%d",&n);
    f1=fopen("2file.txt","w");
    if(f1==NULL)
    {   printf("\n\t ERROR");
        exit(0);
    }
    for(i=0;i<n;i++)
    {   printf("\n Enter Name");
        scanf("%s",obj.name);
        fflush(stdin);
        //f1rintf(f1,"%s",obj.name);

        printf("\n Enter Roll no.");
        scanf("%d",&obj.roll);
        //f1rintf(f1,"%d",obj.roll);

        printf("\n Enter Standard");
        scanf("%d",&obj.std);
        fwrite(&obj,sizeof(obj),1,f1);

    }
    fclose(f1);

}
