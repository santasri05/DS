#include<stdio.h>
#include<stdlib.h>
struct dlt_in_mid
{
  int data;
  struct dlt_in_mid*left;
  struct dlt_in_mid*right;
};
typedef struct dlt_in_mid mid;
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
void delete()
{   mid *temp;
    int pos,i,n;
    printf("\nEnter the position elements which want to delete:");
    scanf("%d",&pos);
    if (pos>1 && pos<n)
        {
            temp=start;
            for(i=2;i<=pos;i++)
               temp = temp -> right; 
           temp -> right -> left = temp -> left; 
           temp -> left -> right = temp -> right; 

            free(temp);
         
        }
        else
        printf("Enter the right position");
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
    printf("\nOperation for deletion (u_u)\n");
   delete();
    printf("\nAfter dltertion the linked list is:");
    display();
    

}