#include<iostream.h>
#include<conio.h>
class examp
{
	int a,b;
	public:
	examp(int x,int y)
	{
		a=x;
		b=y;
		cout<<"Constructor\n";
	}
	void display()
	{
		cout<<"a= "<<a<<"\n"<<"b= "<<b;
	}
};
int main()
{
	clrscr();
	examp obj(20,30);
	obj.display();
	getch();
	return 0;
}