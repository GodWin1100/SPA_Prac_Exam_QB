#include<stdio.h>
#include<conio.h>
//largest among 3
void main()
{
clrscr();
int a,b,c;
printf("Enter three numbers to find largest among them\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
	{
	if(a>c)
		printf("%d is largest number among 3 digit you entered i.e. %d %d %d",a,a,b,c);
	else
		printf("%d is largest number among 3 digit you entered i.e. %d %d %d",c,a,b,c);
	}
else
	{
	if(b>c)
		printf("%d is largest number among 3 digit you entered i.e. %d %d %d",b,a,b,c);
	else
		printf("%d is largest number among 3 digit you entered i.e. %d %d %d",c,a,b,c);
	}
getch();
}