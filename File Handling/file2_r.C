#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct ayush{
    char name[15];
    int roll;
    int std;
    };
int main()
{   system("cls");
    int i,n;
    struct ayush obj;

    FILE *fp;
    fp=fopen("2file.txt","r");
    if(fp==NULL)
    {   printf("\n\t ERROR");
        exit(0);
    }
    printf("\n Name     Roll Number     Standard\n\n");
    while(fread(&obj,sizeof(obj),1,fp)==1)
    {
        printf("%s\n%d\n%d\n\n",obj.name,obj.roll,obj.std);
        printf("\n");
    }

    fclose(fp);
    return 0;

}
