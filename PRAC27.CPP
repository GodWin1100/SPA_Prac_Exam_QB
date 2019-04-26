#include<stdio.h>
#include<conio.h>
//pattern
void main()
{
clrscr();
int n,i,j,k;
printf("Enter number of rows required in pattern\n");
scanf("%d",&n);
for(i=0;i<5;i++)
	{
	for(j=0;j<=i;j++)
		printf(" ");
	for(k=0;k<n-i;k++)
		printf("*");
	printf("\n");
	}
getch();
}