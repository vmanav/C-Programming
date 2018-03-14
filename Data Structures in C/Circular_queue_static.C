#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[100];
int size;
int f=-1; // FRONT
int r=-1; // REAR
void q_insert(int item);
int q_delete();
int main()
{   int ch,item,val,i;
    printf("\nEnter the size of Queue( MAX-100)-");
    scanf("%d",&size);
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
            case 3: i=f;
                    while(i<=r)
                    {   printf("%d\t",queue[i]);
                        i++;
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

void q_insert(int item)
{   if(r==-1) // Queue not formed yet
    {   r=f=0; // first element created
        queue[0]=item;
    }
    else if(f==((r+1)%size))
    {   printf("\n\t OVERFLOW - QUEUE FULL");

    }
    else
    {   r=(r+1)%size;
        queue[r]=item;
    }
}

int  q_delete()
{   int val;
    if(f==-1)//||(r==-1))
    {   printf("\n\t UNDERFLOW -QUEUE EMPTY");
        getch();
        exit(0);
    }
    else if(f==r)
    {   val=queue[f];
        f=r=-1;
        return val;
    }
    else
    {   val=queue[f];
        f=(f+1)%size;
        return val;
    }
