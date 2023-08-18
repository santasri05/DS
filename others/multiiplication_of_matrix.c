#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],i,k,j,sum=0,fr,fc,sr,sc;
   printf("Enter the row and column of frist matrix:");
   scanf("%d%d",&fr,&fc);
   printf("Enter the row and column of second matrix:");
   scanf("%d%d",&sr,&sc);
   if(fc==sr)
   {
   printf("\nEnter elements of first matrix:");
    for(i=0;i<fr;i++)
    {
        for ( j = 0; j <fc; j++)
        {
    
         scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nEnter elements of second elements:");
     for(i=0;i<sr;i++)
    {
        for ( j = 0; j <sc; j++)
        {
         scanf("%d",&b[i][j]);
        }
        
    }
      for(i=0;i<fr;i++)
    {
        for ( j = 0; j <sc; j++)
        {
         for(k=0;k<fc;k++)
         
             sum+=a[i][k]*b[k][j];
             c[i][j]=sum;
             sum=0;
         
        }
    }  
      for(i=0;i<fr;i++)
    {
        for ( j = 0; j <sc; j++)
        
            printf("%d\t",c[i][j]);
            printf("\n");
        
    }
   }
   else
   {
       printf("Multiplication not possible.");
   }

}