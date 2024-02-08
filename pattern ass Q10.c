///pattern ass Q.10
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,p=0;
   int no=2;
      printf("\n enter row and columnsize=");
      scanf("%d",&p);
      
      
      for(i=1 ; i<=p ; i++) 
      {
        
        for(j=1 ; j<=p ; j++)
        {
          if(i>=j )
          {
           printf(" %d ",no*j) ;
          }
          else
          {
           printf("  ");
          }
        }
        printf("\n");
      }
   getch();
   return 0;
}