////basic pattern N
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,p=0;
      
      printf("\n enter row and columnsize=");
      scanf("%d",&p);
      
      
      for(i=1 ; i<=p ; i++) 
      {
        for(j=1 ; j<=p ; j++)
        {
          if(j==1|| j==p || i==j)
          {
           printf(" * ");
          }
          else
          {
           printf("   ");
          }
        }
        printf("\n");
      }
   getch();
   return 0;
}