#include<stdio.h>
#include<stdlib.h>
struct ins_in_end
{
  int data;
  struct ins_in_end*left;
  struct ins_in_end*right;
};
typedef struct ins_in_end end;
end*start=NULL;
end*getnode()
{
    end*newnode;
    newnode=(end*)malloc(sizeof(end));
    printf("\nEnter the data of node");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
}
void create(int n)
{
    end*temp,*newnode;
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
{   end*newnode,*temp;
    newnode=getnode();
    if(start==NULL)
    start==newnode;
    else
    {
        temp = start; 
        while(temp -> right != NULL) 
        temp = temp -> right; 
        temp -> right = newnode; 
        newnode -> left = temp; 
    }
}
void display()
{
     end*temp;
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