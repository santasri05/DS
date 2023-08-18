#include<stdio.h>
#include<stdlib.h>
struct delete_at_end
{
    int data;
    struct delete_at_end*next;
};
typedef struct delete_at_end end;
end*start=NULL;
end*newnode;
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
    end*temp;
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
    end*temp;
    if(start==NULL)
        printf("The list is empty");
    else
       { temp=start;
         while(temp!=NULL)
        {  printf("%d \t",temp->data);
           temp=temp->next;
        }
       }
}
void delete()
{   end *prev,*temp;
    if(start==NULL)
        printf("Linked list is already empty");
    else
    {   prev=temp=start;
        while(temp->next!=NULL)
           {  prev=temp;
             temp=temp->next;}
        prev->next=NULL;
        free(temp);
    }
}
 void main()
 {
    int n;
    printf("\nEnter how many nodes are present in previous node :");
    scanf("%d",&n);
    create(n);
    printf("\nPrevious linked list elements are:");
    display();

    delete();
    printf("\nnewnode linked list elements are:");
    display();
 }