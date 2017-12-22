#include<stdio.h>
#include<conio.h>
#include<string.h>
struct books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
int main()
{

	struct books books1;
	struct books books2;
	clrscr();

	strcpy(books1.title,"C Programming");
	strcpy(books1.author,"Nuha Ali");
	strcpy(books1.subject,"C programming Tutorial");
	books1.book_id=6406;

	printf("Book 1 title : %s\n",books1.title);
	printf("Book 1 author : %s\n",books1.author);
	printf("Book 1 subject : %s\n",books1.subject);
	printf("Book 1 book_id ; %d\n",books1.book_id);

	getch();
	return 0;
}
