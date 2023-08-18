# include <stdio.h>
int Q[100]; 
int front=0, rear=0;
int n; 
void insert()
{ 
 int data; 
if(rear==n)
printf("\n Linear Queue is full"); 
 else 
 { 
printf("\n Enter data: "); 
 scanf("%d", &data); 
 Q[rear] = data; 
 rear++; 
printf("\n Data Inserted in the Queue "); 
 } 
} 
void delete()
{ 
if(rear == front) 
 { 
 printf("\n\n Queue is Empty.."); 
 return; 
 } 
 else 
 { 
printf("\n Deleted element from Queue is %d", Q[front]); 
 front++; 
 } 
} 
void display()
{ 
 int i;
 if(front == rear) 
 { 
printf("\n Queue is Empty"); 
 return; 
 } 
 else 
 { 
printf("\n Elements in Queue are: "); 
for(i = front; i < rear; i++)
{
 printf("%d\t", Q[i]); 
 }
 } 
} 
int menu() 
{ 
 int ch;
 //clrscr(); 
printf("\nQueue operations using ARRAY.."); 
printf("\n 1.Insert 2.Delete 3.Display 4.Exit");
printf("\n Enter your choice: "); 
 scanf("%d", &ch); 
 return ch; 
} 
void main()
{ 
 int ch;
 printf("Enter the size of queue:");
scanf("%d",&n);
  while(1)
 { 
 ch = menu(); 
 switch(ch) 
 {
 case 1: 
 insert(); 
 break;
 case 2: 
 delete(); 
 break;
 case 3: 
 display(); 
 break;
 case 4: 
 return;
 }
 //getch(); 
 }
}