#include <stdio.h>
#include <conio.h>
void display(int );
int main ()
{
    int i ;
     int marks [] = {24,50,60,40,90};
     printf("Entered marks are");
      for (i = 0;i<=4;i++)
     {
         display(marks[i]);
         printf("\n");
         }
  
         getch();
                return 0;
     }
     void display(int m)
     {
          printf("%d",m);
          }
     
