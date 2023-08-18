#include<stdio.h>
struct n
{
   int a;
   struct n*prev_link;
   struct n*next_link; 
};
int main()
{
   struct n ob1,ob2,ob3; 
    ob1.prev_link=NULL;
    ob1.next_link=NULL;
    printf("Enter ob1:");
    scanf("%d",&ob1.a);
    
    ob2.prev_link=NULL;
    ob2.next_link=NULL;
    printf("Enter ob2:");
    scanf("%d",&ob2.a);

    ob3.prev_link=NULL;
    ob3.next_link=NULL;
    printf("Enter ob3:");
    scanf("%d",&ob3.a);

    ob1.next_link=&ob2;
    ob2.next_link=&ob3;
    ob3.prev_link=&ob2;
    ob2.prev_link=&ob1;
    printf("%d\t",ob1.a);
    printf("%d\t",ob1.next_link->a);
    printf("%d\n",ob1.next_link->next_link->a);
    
    printf("%d\t",ob2.prev_link->a);
    printf("%d\t",ob2.a);
    printf("%d\n",ob2.next_link->a);

    printf("%d\t",ob3.prev_link->prev_link->a);
    printf("%d\t",ob3.prev_link->a);
    printf("%d",ob3.a);
    return 0;

}