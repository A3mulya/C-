#include<iostream.h>
#include<conio.h>
class line{
	public:
	double length;
	void setlen(double len);
	double getlen(void);
};
double line::getlen(void){
return length;
}
void line::setlen(double len){
length=len;
}
int main()
{
	clrscr();
	line lin;
	lin.setlen(7.0);
	cout<<"Length: "<<lin.getlen()<<endl;
	lin.length=10.0;
	cout<<"Length: "<<lin.length<<endl;
	getch();
	return 0;
}