#include<stdio.h>
#include<stdlib.h>
struct intermid_insert
{
    int data;
    struct intermid_insert*next;
};
typedef struct intermid_insert mid;
mid*start=NULL;
mid*getnode()
{
    mid*newnode;
    newnode=(mid*)malloc(sizeof(mid));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    mid*new,*temp;
     for(i=0;i<n;i++)
        {
            new=getnode();
            if(start==NULL)
                {
                    start=new;
                }
            else
                {   temp=start;
                    while(temp->next !=NULL)
                        temp=temp->next;
                    temp->next=new;    
                }
        }    

}
void display()
{
    mid*temp;
    if(start==NULL)
        printf("The list is empty");
    else
       { temp=start;
         while(temp!=NULL)
        {  printf("%d\t",temp->data);
           temp=temp->next;
        }
       }
}
void insert(int n)
{   mid *ptr,*new;
    int pos,i;
    printf("\nEnter the position where new node has to be inserted :");
    scanf("%d",&pos);
    new=getnode();
    if (pos>1 && pos<n)
        {
            ptr=start;
            for(i=2;i<pos;i++)
            {
                ptr=ptr->next;
            }
            new->next=ptr->next;
            ptr->next=new;
        }
    else
        printf("Enter the correct position");

}
 void main()
 {
    int n;
    printf("\n Enter how many elements :");
    scanf("%d",&n);
    create(n);
    printf("\n linked list elements are:");
    display();
    
    insert(n);
    printf("\nNEW linked list elements are :  ");
    display();
 }