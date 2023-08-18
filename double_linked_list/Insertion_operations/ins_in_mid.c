#include<stdio.h>
#include<stdlib.h>
struct ins_in_mid
{
  int data;
  struct ins_in_mid*left;
  struct ins_in_mid*right;
};
typedef struct ins_in_mid mid;
mid*start=NULL;
mid*getnode()
{
    mid*newnode;
    newnode=(mid*)malloc(sizeof(mid));
    printf("\nEnter the data of node");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
}
void create(int n)
{
    mid*temp,*newnode;
    int i;
    for(i=0;i<n;i++)
    {
        newnode=getnode();
        if(start==NULL)
          start=newnode;
          else
          {
               temp=start;
            while(temp->right!=NULL)
            temp=temp->right;
            temp->right=newnode;
            newnode->left=temp;
          }

    }
}
void insert()
{  mid*temp,*newnode;
    int pos,i,n;
    printf("\nEnter the position where new node has to be inserted :");
    scanf("%d",&pos);
    newnode=getnode();
    if (pos>1 && pos<n)
        {
         temp=start;
        for(i=2;i<pos;i++)
        temp=temp->right;
        newnode->right=temp->right;
        temp->right->left=newnode;
         newnode->left=temp;
        temp->right=newnode;
       
        }


    else
        printf("Enter the correct position between 1 and %d",n);
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
           temp=temp->right;
        }
       }
}
void main()
{   int n;
    printf("\nEnter how many elements :");
    scanf("%d",&n);
    create(n);
    printf("\nlinked list elements are:");
    display();
    printf("\nOPERATION FOR INSERTION (u_u)\n");
    insert();
    printf("\nAfter insertion the linked list is:");
    display();
    

}