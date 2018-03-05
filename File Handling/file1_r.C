#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct ayush{
    char name[15];
    int roll;
    int std;
    };
int main()
{
    int i,n;
    struct ayush obj;

    FILE *fp;
    fp=fopen("manav.txt","r");
    if(fp==NULL)
    {   printf("\n\t ERROR");
        exit(0);
    }
    printf("\n Name     Roll Number     Standard\n\n");
    while((fscanf(fp,"%s %d %d",obj.name,&obj.roll,&obj.std))!=EOF)
    {
        printf("%s\t%d\t%d",obj.name,obj.roll,obj.std);
        printf("\n");
    }

    fclose(fp);
    return 0;

}
