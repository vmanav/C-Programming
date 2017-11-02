// Program to Understand Basics of Structures !
#include<stdio.h>
struct Person
{   char name[20];
    int age;
    float salary;
}p;

struct Person getdata(struct Person)
{   printf("Enter Details :-\n");
    printf("Enter Name\n");
    scanf("%s",p.name);
    printf("Enter Age\n");
    scanf("%d",&p.age);
    printf("Enter Salary\n");
    scanf("%f",&p.salary);
    return p;
}
void displaydata(struct Person)
{   printf("\nDetails :-\n");
    printf("Name %s \n",p.name);
    printf("Age %d\n",p.age);
    printf("Salary %f\n",p.salary);

}
int main()
{   struct Person M;
    printf("Basic Program .\n");
    M=getdata(p);
    displaydata(M);
    return 0;
}

