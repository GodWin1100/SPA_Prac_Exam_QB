#include<stdio.h>
#include<conio.h>
//pattern
void main()
{
clrscr();
int n,i,j,k=65;
printf("Enter the number of rows required in pattern\n");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	k=65;
	for(j=0;j<=i;j++)
		{
		printf("%c ",k);
		k++;
		}
	printf("\n");
	}
getch();
}