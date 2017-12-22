#include<stdio.h>
#include<conio.h>
#define true 1
#define false 0
float rad=6.00;
int num1=60,num2=40;
const float pi = 3.14;
int main()
{
   float area;
   clrscr();
   printf("%d",(num1>num2)?true:false);
   area=pi*rad*rad;
   printf("\nArea = %.3f",area);
   getch();
   return 0;
}