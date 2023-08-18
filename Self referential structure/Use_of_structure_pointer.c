#include<stdio.h>
struct stu
{
    char name[30];
    int roll;
};
int main()
{
    struct stu s,r,*p,*p2;
    p=&s;
    p2=&r;
    printf("Enter student name:");
    scanf("%s",&s.name);
    printf("Enter student roll no:");
    scanf("%d",&r.roll);
    printf("Name of student %s\n",p->name);
    printf("Roll of student %d",p2->roll);
    return 0;


}