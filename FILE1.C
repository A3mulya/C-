#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	FILE *fr;
	char c;
	fp=fopen ("prog41.c","r");
	fr=fopen("prog.txt","w");
	while((c=fgetc(fp))!=EOF)
	{
		fprintf(fr,"%c",c);
	}
	fclose(fp);
	fclose(fr);
	clrscr();
	getch();
	return 0;
}
