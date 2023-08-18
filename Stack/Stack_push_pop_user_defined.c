#include<stdio.h>
#include<stdlib.h>
int top=0;
int n;
int stack[100];
int operation()
{
    int ch;
    printf("\nStack operations using ARRAY");
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    return ch;
}
void display()
{
    int i;
    if(top==0)
    printf("The stack is empty");
    else
    {
        printf("\nElements in stack");
        for(i=0;i<top;i++)
        printf("\t%d",stack[i]);
    }

}
void pop()
{
    if(top==0)
    printf("\nStack underflow");
    else
    {
        printf("\nPopped element is %d",stack[--top]);

    }

}
void push()
{
    int item;
    if(top==n)
    {
        printf("\nStack overflow");
    }
    else
    {
        printf("\nEnter data");
        scanf("%d",&item);
        stack[top]=item;
        top=top+1;
        printf("\ndata pushed in the stack");
    }
}
void main()
{
    int ch;
    printf("Enter the size of array:");
    scanf("%d",&n);
    do{
        ch=operation();
        switch(ch)
        {
           case 1:
           push();
           break;
           case 2:
           pop();
           break;
           case 3:
           display();
           break;
           case 4:
           exit(0);
        }
        }
        while(1);
    }
