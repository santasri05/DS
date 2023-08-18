#include<stdio.h>
#include<stdlib.h>
struct beg_ins
{
    int data;
    struct beg_ins*next;
};
typedef struct beg_ins beg;
beg*header=NULL;
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
    beg*new,*temp;
     for(i=0;i<n;i++)
        {
            new=getnode();
            if(header==NULL)
                {
                    header=new;
                }
            else
                {   temp=header;
                    while(temp->next !=NULL)
                        temp=temp->next;
                    temp->next=new;    
                }
        }    

}
void display()
{
    beg*temp;
    if(header==NULL)
        printf("The list is empty");
    else
       { temp=header;
         while(temp!=NULL)
        {  printf("%d\t",temp->data);
           temp=temp->next;
        }
       }
}
void srch(int ele)
{
     beg*temp;
     int c=1;
    if(header==NULL)
        printf("The list is empty");
    else
       { temp=header;
            while(temp!=NULL)
            {  if(temp->data==ele)
                   {
                        printf("\nThe element is present in %d no. position",c);
                        break;
                    }
                else
                {
                    temp=temp->next;
                    c++;
                
                 }
                 
             }
       }
             if(temp==NULL)
             {
                 printf("\nEnter the correct element for searching");
             }
        
}

 void main()
 {
    int n,ele;
    printf("\nEnter how many nodes are present in linked list :");
    scanf("%d",&n);
    create(n);
    printf("\nLinked list elements are:");
    display();
    printf("\nEnter the element which have to search :");
    scanf("%d",&ele);
    srch(ele);

    
 }