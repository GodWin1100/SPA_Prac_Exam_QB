#include<stdio.h>
#include<conio.h>
#include<math.h>
//armstrong number
void main()
{
clrscr();
long int num,temp2,temp,check=0,count=0,mod;
printf("Enter number to check whether it is Armstrong or not\n");
scanf("%ld",&num);
//counting digits of entered number
temp=num;
temp2=num;
while(temp2>0)
	{
	temp2=temp2/10;
	count++;
	}
printf("\nNumber of digits of entered number is %ld\n",count);
//armstrong operations
while(temp>0)
	{
	mod=temp%10;
	check=check+pow(mod,count);
	temp=temp/10;
	}
if(check==num)
	printf("\n%ld is an Armstrong number!!!",check);
else
	printf("\n%ld is not an Armstrong number...",num);
getch();
}
