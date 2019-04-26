#include<stdio.h>
#include<conio.h>
// pattern
void main()
{
clrscr();
int n,i,j,k;
printf("Enter number of rows for pattern\n");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		printf(" ");
	for(k=1;k<=i+1;k++)
		printf("%d ",k);
	printf("\n");
	}
getch();
}