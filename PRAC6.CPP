#include<stdio.h>
#include<conio.h>
//decimal to binary
void main()
{
clrscr();
long int num,rem,sum=0,i=1,temp;
printf("Enter number in Decimal to find it's Binary Equivalent\n");
scanf("%ld",&num);
temp=num;
do
	{
	rem=temp%2;
	sum=sum+(rem*i);
	temp=temp/2;
	i=i*10;
	}
while(temp>0);
printf("Binary equivalent of %ld is %ld",num,sum);
getch();
}
