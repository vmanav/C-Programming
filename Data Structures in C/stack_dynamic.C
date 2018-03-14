#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{   int data;
    struct stack * next;
};
struct stack * top=NULL;
void push(int item)
{   struct stack * obj;
    obj=(struct stack *)malloc(sizeof(struct stack));
    if(obj==NULL)
    {   printf("\n\t OVERFLOW");
    }
    else
    {   obj->data=item;
        obj->next=top;
        top=obj;
    }
}
void traverse()
{   printf(" STACK");
    struct stack * obj;
    obj=top;
    if(top!=NULL)
    {   while(obj!=NULL)
        {   printf("\n %d",obj->data);
            obj=obj->next;
        }
    }
    else
    {   printf("\n\t SATCK EMPTY");
    }

}

int pop()
{   struct stack * temp;
    int item=0;
    if(top==NULL)
    {   printf("\n\t UNDERFLOW");
    }
    else
    {   item=top->data;
        temp=top;
        top=top->next;
        free(temp);
    }
    return item;
}

int main()
{   struct stack S;
    int ch,item,val;
    printf("\n\t MENU");
    printf("\n\t 1.PUSH");
    printf("\n\t 2.POP");
    printf("\n\t 3.TRAVERSE");
    do{
    printf("\n Enter choice");
    scanf("%d",&ch);
    switch(ch)
    {   case 1: printf("\n Enter Item");
                scanf("%d",&item);
                push(item);
                break;
        case 2 : val=pop();
                 printf("\n Item -%d",val);
                break;
        case 3: traverse();
                break;

    }
    }
    while(1);
    return 0;
}


