#include<stdio.h>
#include<stdlib.h>
struct delete_at_mid
{
    int data;
    struct delete_at_mid*next;
};
typedef struct delete_at_mid mid;
mid*start=NULL;
mid*new;
mid*getnode()
{
    mid*new;
    new=(mid*)malloc(sizeof(mid));
    printf("Enter the data of the node :");
    scanf("%d",&new->data);
    new->next=NULL;
}

void create(int n)
{
    int i;
    mid*temp;
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
void delete(int n)
{   mid *temp,*prev;
    int pos,i;
    printf("\nEnter the position elements which want to delete:");
    scanf("%d",&pos);
    if (pos>1 && pos<n)
        {
            prev=temp=start;
            for(i=2;i<=pos;i++)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            free(temp);
        }
    else
        printf("Enter the correct position");

}
 void main()
 {
    int n;
    printf("\nEnter how many nodes:");
    scanf("%d",&n);
    create(n);
    printf("\nThe elements of linked list are:");
    display();

    delete(n);
    printf("\nAfter deletion linked list elements are:");
    display();
 }