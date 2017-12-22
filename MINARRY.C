#include<stdio.h>
#include<conio.h>
int minarry(int arr[],int size)
{
	int min=arr[0];
	int i=0;
	for(i=0;i<size;i++){
	if(min>arr[i])
	{
		min=arr[i];
	}
	}
	return min;
}
int main()
{
	int i=0,min=0;
	int num[]={9,7,0,5,1,4};
	clrscr();
	min=minarry(num,6);
	printf("minimum number is %d \n",min);
	getch();
	return 0;
}










