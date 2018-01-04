#include<iostream.h>
#include<conio.h>
class emp
{
	public:
	emp()
	{
		cout<<"default const"<<endl;
	}
};
int main(void)
{
	clrscr();
	emp e1;
	emp e2;
	getch();
	return 0;
}
