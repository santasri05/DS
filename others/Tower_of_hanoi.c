#include<stdio.h>
void tower(int n,char beg,char mid,char end);
void main()
{
    int n;
    char beg='a',mid='b',end='c';
    printf("Enter the no of disk:");
    scanf("%d",&n);
    printf("The sequence is:\n");
    tower(n,beg,mid,end);

}
void tower(int n,char beg,char mid,char end)
{
    if(n==1)
    {
        printf("Move disk %d to %c-->%c\n",n,beg,end);
        return ;
    }
    tower(n-1,beg,end,mid);
     printf("Move disk %d to %c-->%c\n",n,beg,end);
     tower(n-1,mid,beg,end);

}