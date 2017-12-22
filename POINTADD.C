#include<stdio.h>
#include<conio.h>
int main()
{
	int num = 03;
	int *p;
	int **p2;
	int ***p3;
	clrscr();
	p=&num;
	p2=&p;
	p3=&p2;
	printf("Address of number variable is %x \n",&num);
	printf("Address of p variable is %x \n",p);
	printf("value of *p variable is %d \n",*p);
	printf("Addres of p2 variable is %x \n",p2);
	printf("value of **p2 variable is %d \n",**p2);
	printf("address of p3 variable is %x \n",p3);
	printf("value of ***p3 variable is %d \n",***p3);
	getch();
	return 0;
}
