#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
   int a,b,c;
   clrscr();
   printf("Enter value of a and b: ");
   scanf("%d %d",&a,&b);
   c=sum(a,b);
   printf("Sum of two numbers = %d",c);
   getch();
   return 0;
}
int sum(int x,int y)
{
   int z;
   z=x+y;
   return z;
}