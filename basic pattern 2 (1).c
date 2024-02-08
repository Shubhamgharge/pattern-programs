////basic pattern 2
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
          if((i==1||j==1)||(i==p || j==p)) 
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