#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[100];
int top=-1;
int len;
int check_top(char open,char close)
{   if(open == '(' && close == ')')
        return 1;
	else if(open == '{' && close == '}')
        return 1;
	else if(open == '[' && close == ']')
        return 1;
    return 0;
}

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
void pop()
{   char ch;
    if(top==-1)
    {   printf("UNDERFLOW");
        getch();
        exit(0);
    }
    else
    {   ch=stack[top];
        top--;
    //    return ch;
    }
}
int main()
{   int i;
    char str[50]; // string to store the expression
    printf("\n Enter String -");
    gets(str);
    printf("\n You Entered- %s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {   if((str[i]=='(')||(str[i]=='{')||(str[i]=='['))
        {   push(str[i]);
        }
        else if((str[i]==')')||(str[i]=='}')||(str[i]==']'))
        {   if((top==-1)||!(check_top(stack[top],str[i])))
            {   printf("\n\t INVALID EXPRESSION");
                getch();
                exit(0);
            }
            else
            {   pop();
            }

        }

    }
    if(top==-1)
    {   printf("\n\tBALANCED EXPRESSION");
    }
    getch();

    return 0;

}
