#include<stdio.h>
#include<conio.h>
//pattern
void main()
{
clrscr();
int n,i,j,l=1;
printf("Enter how many rows required in the pattern\n");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
	{
	for(j=0;j<i+1;j++)
		{
		printf("%d\t",l);
		l++;
		}
	printf("\n");
	}
getch();
}