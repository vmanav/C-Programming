#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{   int item;
    struct node * next;
};
struct node * first = NULL;
void insert_beg(int item)
{   struct node * temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {   printf("\nOVERFLOW");
    }
    else
    {   temp->item=item;
        temp->next=first;
        first=temp;
    }
}
void insert_end(int item)
{   struct node *temp, *ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {   printf("\nOVERFLOW");
    }
    else
    {   temp->item=item;
        temp->next=NULL;
        if(first==NULL)
        {   first=temp;
        }
        else
        {   ptr=first;
            while((ptr->next)!=NULL)
            {   ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
}
void insert_pos(int item,int pos)
{   int i ,ctr=0;
    struct node *temp, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    temp=first;
    while(temp!=NULL)
    {   ctr++;
        temp=temp->next;
    }
    if(pos==1)
    {   insert_beg(item);
    }
    else if(pos>ctr)
    {   insert_end(item);
    }
    else
    {   newnode->item=item;
        temp=first;
        for(i=1;i<pos-1;i++)
        {   temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void traversal()
{   struct node *temp;
    if(first==NULL)
    {   printf("EMPTY LIST");
    }
    else
    {   temp=first;
        while(temp!=NULL)
        {   printf("%d",temp->item);
            temp=temp->next;
        }
    }
}
int delete_beg()
{   int item;
    struct node *temp;
    if(first==NULL)
    {   printf("\nUNDERFLOW");
    }
    else
    {   temp=first;
        first=first->next;
        item=temp->item;
        free(temp);
        return item;
    }
}
int delete_end()
{   int item;
    struct node *temp,*temp1;
    if(first==NULL)
    {   printf("\nUNDERFLOW");
    }
    else
    {   temp=first;
        while(temp->next!=NULL)
        {   temp1=temp;
            temp=temp->next;
        }
        item=temp->item;
        if(first->next==NULL)
        {   first=NULL;
        }
        else
        {   temp1->next=NULL;
        }
        free(temp);

    return item;
    }
}

int delete_pos(int pos)
{   int item ,i,ctr=0;
    struct node *temp,*temp1;
    if(first==NULL)
    {   printf("\n UNDERFLOW");
    }
    else
    {   if(pos==1)
        {   item=delete_beg();
        }
        else
        {   temp=first;
            while(temp!=NULL)
            {   ctr++;
                temp=temp->next;
            }
            if(pos>=ctr)
            {   item=delete_end();
            }
            else
            {   temp=first;
                for(i=1;i<=pos-1;i++)
                {   temp1=temp;
                    temp=temp->next;
                }
                item=temp->item;
                temp1->next=temp->next;
                free(temp);
            }
        }
        return (item);
    }
}
int main()
{   int ch ,num1,num2,num3,pos,item1,item2,item3,pos1;
    printf("\n1. Insert at beginning");
    printf("\n2. Insert at end");
    printf("\n3. Insert at position");
    printf("\n4. Delete from beginning");
    printf("\n5. Delete from end");
    printf("\n6. Delete from position");
    printf("\n7. Traversal");
    printf("\n8. EXIT");
    do
    {   printf("\n Enter Choice (1-8)");
        scanf("%d",&ch);
        switch(ch)
        {   case 1 : printf("Enter no. to be inserted-");
                     scanf("%d",&num1);
                     insert_beg(num1);
                     break;
            case 2 : printf("Enter no. to be inserted-");
                     scanf("%d",&num2);
                     insert_end(num2);
                     break;
            case 3 : printf("Enter no. to be inserted-");
                     scanf("%d",&num3);
                     printf("Enter no. position-");
                     scanf("%d",&pos);
                     insert_pos(num3,pos);
                     break;
            case 4 : item1=delete_beg();
                     printf("Deleted element - %d",item1);
                     break;
            case 5 : item2=delete_end();
                     printf("\n Deleted element - %d",item2);
                     break;
            case 6 : printf("Enter the position-");
                     scanf("%d",&pos1);
                     item3=delete_pos(pos1);
                     printf("Deleted element - %d",item3);
                     break;
            case 7 : traversal();
                     break;
            case 8 : printf("\n\t Terminating Program.");
                    getch();
                    exit(0);
                    break;
        }

    }
    while(1);
    getch();
}


