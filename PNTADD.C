#include<stdio.h>
#include<conio.h>
int main()
{
int number=55;
int *p;
clrscr();
p=&number;
printf("Address of p variable is %u \n	",p);
p=p+3;
printf("After adding 3 : Address of p variable is %u \n",p);
getch();
return 0;
}
