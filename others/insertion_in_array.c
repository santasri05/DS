#include<stdio.h>
#include<string.h>
void main()
{
int len,n,k,j;
char item;
char str[567];
printf("Enter your element::");
scanf("%s",&str);
printf("\nYour element is %s",str);
n=strlen(str);
printf("\n%s length is %d",str,n-1);
printf("\nEnter the postion where you wants to enter the element::");
scanf("%d",&k);
printf("\nInsert the new element::");
scanf("%s",item);
for(j=n;j>=k;j--)
{ 
    str[j+1]=str[j];
}
str[k]=item;
printf("\nthe modified string is %s",str);

}