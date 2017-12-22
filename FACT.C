#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
	if(n<0)
	return -1;
	if(n==0)
	return 1;
	return(n* factorial(n-1));
}
int main()
{
	int fact=0;
	fact=factorial(3);
	printf("\n Factorial of 3 is %d",fact);
	getch();
	return 0;
}