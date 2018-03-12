#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int stack[100];
int size;
int top=-1;
void push(int item);
int pop();
int main()
{   int ch,item,val;
    printf("\nEnter the size of the stack ( MAX-100)-");
    scanf("%d",&size);
    printf("\t\t MENU\n");
    printf("\t 1. Push\n");
    printf("\t 2. Pop\n");
    printf("\t 3. Traversal\n");
    printf("\t 4. Exit\n");
    do
    {   printf("\n Enter Choice");
        scanf("%d",&ch);
        switch(ch)
        {   case 1: printf("\nEnter the Item to be Pushed\n");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2: val=pop();
                    printf("\nItem Popped - %d\n",val);
                    break;
            case 3: int i;
                    if(top==-1)
                    {   printf("\n\t UNDERFLOW - NO ELEMENTS TO SHOW\n");
                        exit(0);
                    }
                    for(i=top;i>=0;i--)
                    {   printf("%d\t",stack[i]);
                    }
                    break;
            case 4: printf("\n\t\tTERMINATING RPGRAM \n");
                    getch();
                    exit(0);
                    break;
        }

    }
    while(1);
    getch();
    return 0;
}
void push(int item)
{   if(top==(size-1))
    {   printf("\n\t OVERFLOW\n");
        exit(0);
    }
    else
    {   top++;
        stack[top]=item;
    }

}
int pop()
{   if(top==-1)
    {   printf("\n\t UNDERFLOW\n");
        exit(0);
    }
    else
    {   int item=stack[top];
        top--;
        return item;
    }


}
