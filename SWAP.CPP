#include<iostream.h>
#include<conio.h>

void swap(int &a,int &b)
{
b=a+b;
a=b-a;
b=b-a;
}
int main()
{
clrscr();
int a,b;
cout << "Enter two numbers";
cin >> a>> b;
swap(a,b);
cout << "Value after swapped: "<<endl;
cout << "a: "<<a<<endl;
cout << "b: "<<b<<endl;
getch();
return 0;
}

