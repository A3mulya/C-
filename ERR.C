#include<stdio.h>
#include<conio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE *fp;
	clrscr();
	fp= fopen("Error.txt","r");
	printf("value of error: %d",errno);
	printf("error message is : %s\n",strerror(errno));
	perror("message from perror");
	getch();
	return 0;
}