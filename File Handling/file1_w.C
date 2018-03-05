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
    FILE *fp;
    printf("\t Enter Number 'n' \n");
    scanf("%d",&n);
    fp=fopen("manav.txt","w");
    if(fp==NULL)
    {   printf("\n\t ERROR");
        exit(0);
    }
    for(i=1;i<=n;i++)
    {   printf("\n Enter Name");
        scanf("%s",obj.name);
        printf("\n Enter Roll no.");
        scanf("%d",&obj.roll);
        printf("\n Enter Standard");
        scanf("%d",&obj.std);
        fprintf(fp,"%s\t%d\t%d\n",obj.name,obj.roll,obj.std);
        getch();
    }
    fclose(fp);

}
