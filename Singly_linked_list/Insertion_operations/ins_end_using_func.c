#include<stdio.h>
#include<stdlib.h>
struct insert_end
{
    int data;
    struct insert_end*next;
};
typedef struct insert_end end;
end*start=NULL;
end*getnode()
{
    end*newnode;
    newnode=(end*)malloc(sizeof(end));
    printf("Enter the data of the node :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

void create(int n)
{
    int i;
    end* new,*temp;
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
    end*temp;
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
void insert()
{   end *new,*temp;
     new=getnode();
    if(start==NULL)
        start=new;
    else
    {   temp=start;
        while(temp->next!=NULL)
             temp=temp->next;
        temp->next=new;
    }
}
 void main()
 {
    int n;
    printf("\nEnter how many elements :");
    scanf("%d",&n);
    create(n);
    printf("\nlinked list elements are:");
    display();
    printf("\nOPERATION FOR INSERTION AT THE INTERMEDIATE  :\n");
    insert();
    printf("\nAfter insertion the linked list is:");
    display();
 }