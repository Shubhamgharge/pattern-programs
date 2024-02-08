///pattern ass Q.2
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,p=0;
   char ch='\0';
      printf("\n enter row and columnsize=");
      scanf("%d",&p);
      
      
      for(i=1 ; i<=p ; i++) 
      {
        for(ch='A',j=1 ; j<=p ; j++,ch++)
        {
          if(i>=j)
          {
           printf(" %c ",ch);
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