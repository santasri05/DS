#include<stdio.h>
int f(int n);
 int main()
{
    int n,fact;
    printf("Enter a value::");
    scanf("%d",&n);
    fact=f (n);
    printf("\n%d!=%d",n,fact);
}
int f(int n)
{
    int r;
    if(n==1||n==0)
    return(1);
    else
    r=n*f(n-1);
    return(r);

}