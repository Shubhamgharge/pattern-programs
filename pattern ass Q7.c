///pattern ass Q.7
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,p=0;
   int no=7,temp=1;
   
      printf("\n enter row and column size=");
      scanf("%d",&p);
      
      
      for(i=1 ; i<=p ; i++) 
      {
        
        for(j=1 ; j<=p ; j++)
        {
            if(i>=j)
          {
           printf(" %d ",no*temp);
           temp++;
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