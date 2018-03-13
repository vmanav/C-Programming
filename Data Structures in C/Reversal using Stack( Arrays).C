#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[100];
int top=-1;
int len;
void push(char ch)
{   if(top==(len-1))
    {   printf("OVERFLOW");
        getch();
        exit(0);
    }
    else
    {   top++;
        stack[top]=ch;
    }
}
char pop()
{   char ch;
    if(top==-1)
    {   printf("UNDERFLOW");
        getch();
        exit(0);
    }
    else
    {   ch=stack[top];
        top--;
        return ch;
    }
}
int main()
{   int i;
    char str[50],str1[50];
    strcpy(str1,str);
    printf("\n Enter String -");
    gets(str);
    printf("\n You Entered- %s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {   push(str[i]);
    }
    for(i=0;i<len;i++)
    {   str1[i]=pop();
    }
    str1[len]='\0';
    printf("\n REVERSED - %s",str1);

}

