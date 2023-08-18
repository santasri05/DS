#include<stdio.h>
#include<stdlib.h>
struct delete_at_beg
{
    int data;
    struct delete_at_beg*next;
};
typedef struct delete_at_beg beg;
beg*start=NULL;
beg*newnode;
beg*getnode()
{
    beg*newnode;
    newnode=(beg*)malloc(sizeof(beg));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    beg*temp;
     for(i=0;i<n;i++)
        {
            newnode=getnode();
            if(start==NULL)
                {
                    start=newnode;
                }
            else
                {   temp=start;
                    while(temp->next !=NULL)
                        temp=temp->next;
                    temp->next=newnode;    
                }
        }    

}
void display()
{
    beg*temp;
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
void delete()
{   beg*temp;
    if(start==NULL)
        printf("\n No nodes are exist:");
    else
    {
        temp=start;
        start=temp->next;
        free(temp);

    }
}
 void main()
 {
    int n;
    printf("\nEnter how many nodes:");
    scanf("%d",&n);
    create(n);
    printf("\nLinked list elements are:");
    display();
    
    delete();
    printf("\nAfter delete first node linked list elements are: ");
    display();
 }