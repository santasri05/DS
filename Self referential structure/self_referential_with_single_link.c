#include<stdio.h>
struct node
{
    int d1,d2;
    struct node*link;
};
int main()
{
    struct node ob1;
    ob1.link=NULL;
    printf("Enter ob1 d1");
    scanf("%d",&ob1.d1);
    printf("Enter ob1 d1");
    scanf("%d",&ob1.d2);
    struct node ob2;
    ob2.link=NULL;
    printf("Enter ob2 d1");
    scanf("%d",&ob2.d1);
    printf("Enter ob2 d2");
    scanf("%d",&ob2.d2);
    ob1.link=&ob2;
    printf("%d\n",ob1.link->d1);
    printf("%d\n",ob1.link->d2);
}