///pattern ass Q.4
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,p=0;
   char ch='A';
   
      printf("\n enter row and column size=");
      scanf("%d",&p);
      
      
      for(ch='A',i=1 ; i<=p ; i++,ch++) 
      {
        
        for(j=1 ; j<=p ; j++)
        {
            if(i>=j)
          {
           printf(" %c ",ch);
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