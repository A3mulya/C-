#include<stdio.h>
#include<conio.h>
enum State {a=0,b,c};
enum State currstate=2;
enum State findState()
{
	return currstate;
}

int main()
{
	(findState() == a)?printf("working"):printf("Not working");
	getch();
	return 0;
}