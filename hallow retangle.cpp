#include <stdio.h>
int main()
{
   int i, j;
   //printf("Enter number of rows: ");
   //scanf("%d", &N);
   for(i=1; i<=5; i++) 
   {
      for(j=1; j<=8; j++)
      {
         if(i==1 || i==5 || j==1 || j==8)
         {
            printf("$");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}
