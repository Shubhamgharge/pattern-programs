///pattern ass Q.1
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,p=0;
   char ch='A';
   
      printf("\n enter row and column size=");
      scanf("%d",&p);
      
      
      for(i=1 ; i<=p ; i++) 
      {
        
        for(j=1 ; j<=p ; j++)
        {
            if(i>=j)
          {
           printf(" %c ",ch);
           ch++;
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