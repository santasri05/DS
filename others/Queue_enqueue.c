#include<stdio.h>
#include<string.h>
void main()
{
int len,n,k,j,i,front,rear;
char item;
char str[10];
printf("Enter the size of queue\n");
scanf("%d",&n);
printf("Enter your element::");
for(i=0;i<n;i++)
{
scanf("%s",&str[i]);
}
printf("\nYour element is %s",str);
n=strlen(str);
printf("\n%s length is %d",str,n-1);
printf("\nInsert the new element::");
scanf("%c",&item);
if(front==1 && rear==n)
 printf("Overflow condition:");
if(front==rear+1)
printf("Overflow condition:");
else if(rear==n)
rear=1;
else
rear=rear+1;
str[rear]=item;
printf("\nAfter insertion the modified string is %s",str[i]);

}