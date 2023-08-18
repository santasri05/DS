#include<stdio.h>
void main()
{
    int a[100],i,n,j,swap;
    printf("Enter the elements in the array:");
    scanf("%d",&n);
    printf("Enter elements:");
    
    for(i=1;i<n;i++)
    scanf("%d",&a[i]);
    //for(i=0;i<n-1;i++)
        for(j=n;j<i+1;j--)
        {
            if(a[j]<a[j-1])
            {
                swap=a[j-1];
                a[j-1]=a[j];
                a[j]=swap;

            }
        }
    
    printf("Sorted list:\n");
    for(i=1;i<n;i++)
    printf("%d\n",a[i]);
}
