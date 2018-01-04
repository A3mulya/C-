#include<iostream.h>
#include<conio.h>
class shape
{
	public:
	void setwt(int w)
	{
		width=w;
	}
	void setht(int h)
	{
		height=h;
	}
	protected:
	int width,height;
};
class rect: public shape
{
	public:
	int area()
	{
		return(width*height);
	}
};
int main(void)
{
	clrscr();
	rect rec;
	rec.setwt(5);
	rec.setht(8);
	cout<<"Area= "<<rec.area()<<endl;
	getch();
	return 0;
}
