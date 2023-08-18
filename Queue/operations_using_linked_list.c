#include<stdio.h>
# include <stdlib.h>    
struct queue 
{ 
 int data; 
struct queue *next; 
}; 
typedef struct queue node; 
node *front = NULL; 
node *rear = NULL; 
node* getnode() 
{ 
 node *temp;
temp = (node *) malloc(sizeof(node)) ; 
printf("\n Enter data "); 
scanf("%d", &temp -> data); 
temp -> next = NULL;
 return temp; 
} 
void insert() 
{ 
 node *newnode; 
 newnode = getnode(); 
 if(newnode == NULL) 
 { 
 printf("\n Queue Full"); 
 return; 
 } 
if(front == NULL) 
 { 
 front = newnode; 
 rear = newnode;
 } 
 else 
 { 
rear -> next = newnode; 
 rear = newnode;
 } 
printf("\n Data Inserted into the Queue..");
} 
void delete() 
{ 
 node *temp;
if(front == NULL) 
 { 
 printf("\n Empty Queue.."); 
 return; 
 } 
temp = front; 
front = front -> next; 
printf("\n Deleted element from queue is %d ", temp -> data);
 free(temp);
}
void display() 
{ 
 node *temp;
if(front == NULL) 
 { 
 printf("\n\n\t\t Empty Queue "); 
 } 
 else 
 { 
 temp = front; 
printf("\n Elements in the Queue are: "); 
 while(temp != NULL ) 
 {
printf("%5d ", temp -> data); 
temp = temp -> next; 
 }
 } 
} 
int menu() 
{ 
 int ch; 
printf("\nQueue operations using pointers.. ");
printf("\n 1. Insert 2.delete 3.Display 4.exit");
printf("\n Enter your choice: "); 
scanf("%d",&ch);
 return ch; 
} 
void main() 
{ 
 int ch; 
 while(ch!=4)
 { 
 ch = menu(); 
 switch(ch) 
 {
 case 1 : 
 insert(); 
 break;
 case 2 : 
 delete(); 
 break;
 case 3 : 
 display(); 
 break;
 case 4: 
 return;
 }
}
}