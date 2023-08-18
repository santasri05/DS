#include<stdio.h>
#include<stdlib.h>
struct create
{
    int data;
    struct create*next;
};
typedef struct create beg;
beg*start=NULL;
beg*getnode(int n)
{
    beg*newnode;
    newnode=(beg*)malloc(sizeof(beg));
    printf("Enter the data of node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
   
}

void create(int n)
{
    int i;
    beg*new,*temp;
     for(i=0;i<n;i++)
        {
            new=getnode(n);
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
 void main()
 {
    int n;
    printf("\nEnter the node have to create: ");
    scanf("%d",&n);
    create(n);
    printf("\nLinked list elements are : ");
    display();
    
 }