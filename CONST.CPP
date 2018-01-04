#include<iostream.h>
#include<conio.h>
class employee
{
	public:
	int id;
	char name;
	float salary;
	void insert(int i,char n,float s)
	{
		id=i;
		name=n;
		salary=s;
	}
	void display()
	{
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};
int main(void)
{
	clrscr();
	employee e1;
	employee e2;
	e1.insert(200,'a',15000);
	e2.insert(201,'b',20000);
	e1.display();
	e2.display();
	getch();
	return 0;
}