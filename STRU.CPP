#include<iostream.h>
#include<conio.h>
struct person
{
char name[20];
int age;
float salary;
};

int main()
{
person p;
cout<<"Enter name: ";
cin.get(p.name,20);
cout<< "Enter age: ";
cin>> p.age;
cout<< "Enter salary: ";
cin>>p.salary;
cout<<"Name: "<<p.name<<endl;
cout<<"Age: "<<p.age<<endl;
cout<<"Salary: "<<p.salary;
getch();
return 0;
}