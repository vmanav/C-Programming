#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct que
{   int item;
    struct que * next;
};
struct que * front=NULL;
struct que * rear=NULL;
void q_insert(int item);
int q_delete();
void q_traverse();
int main()
{   int ch,item,val,i;
    printf("\t\t MENU\n");
    printf("\t 1. Insertion\n");
    printf("\t 2. Deletion\n");
    printf("\t 3. Traversal\n");
    printf("\t 4. Exit\n");
    do
    {   printf("\n Enter Choice");
        scanf("%d",&ch);
        switch(ch)
        {   case 1: printf("\nEnter the Item to be Inserted\n");
                    scanf("%d",&item);
                    q_insert(item);
                    break;
            case 2: val=q_delete();
                    printf("\nItem Deleted - %d\n",val);
                    break;
            case 3: q_traverse();
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
void q_insert( int item)
{   struct que * new1;
    new1=(struct que *)malloc(sizeof(struct que));
    if(new1==NULL)
    {   printf("\n\t OVERFLOW");
    }
    else
    {   new1->item=item;
        new1->next=NULL;
        if((front==NULL)||(rear==NULL))
        {   front=rear=new1;
        }
        else
        {   rear->next=new1;
            rear=new1;
        }

    }
}
int q_delete()
{   int val;
    struct que * temp;
    if(front==NULL)
    {   printf("\n\t UNDERFLOW");
        return 0;
    }
    else
    {   temp=front;
        val=temp->item;
        if(front==rear)
        {   front=rear=NULL;
        }
        else
        {   front=front->next;
            free(temp);
        }
    return (val);
    }
}
void q_traverse()
{   struct que * temp;
    if(front==NULL)
    {   printf("\n\t UNDERFLOW");
    }
    else
    {   temp=front;
        while(temp!=NULL)
        {   printf("\t%d",temp->item);
            temp=temp->next;
        }

    }

}
