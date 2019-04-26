#include<stdio.h>
#include<conio.h>
//pattern print
void main()
{
clrscr();
int n,i,j,k;
printf("Enter numbe of rows u want in pattern\n");
scanf("%d",&n);
if(n<=26&&n>=0)
{
	printf("Pattern is as follows\n");
	for(i=0;i<n;i++)
		{
		for(j=0;j<=i-1;j++)
			printf(" ");
		for(k=65;k<=65+n-1-i;k++)
			printf("%c",k);
		for(k=65+n-2-i;k>=65;k--)
			printf("%c",k);
		printf("\n");
		}
}
else
	printf("Enter number of rows withing range of 0 to 26...");
getch();
}