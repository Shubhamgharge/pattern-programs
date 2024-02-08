////basic pattern 
#include<stdio.h>
#include<conio.h>

int main()
{
   int i=0,j=0,r=0, c=0;
      
      printf("\n enter row size=");
      scanf("%d",&r);
      
      printf("\n enter column size");
      scanf("%d",&c);
      
      for(i=1 ; i<=r ; i++) 
      {
        for(j=1 ; j<=c ; j++)
        {
         printf(" * ");
        
        }
        printf("\n");
      }
   getch();
   return 0;
}