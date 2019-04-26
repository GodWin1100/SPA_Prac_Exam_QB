#include<stdio.h>
#include<conio.h>
//pattern
void main()
{
clrscr();
int n,i,j;
printf("Enter number of rows required in pattern\n");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	for(j=0;j<n-i;j++)
		printf(" ");
	for(j=0;j<=i;j++)
		printf("* ");
	printf("\n");
	}
getch();
}