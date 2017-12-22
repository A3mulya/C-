#include<stdio.h>
#include<conio.h>
enum day { sunday=1,monday,tuesday=5,wednesday,thursday=10,friday,saturday};
int main()
{
	clrscr();
	printf("%d %d %d %d %d %d %d",sunday,monday,tuesday,wednesday,thursday,friday,saturday);
	getch();
	return 0;
}
