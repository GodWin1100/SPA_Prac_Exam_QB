#include<stdio.h>
#include<conio.h>
//gcd and lcm using recursive function
int GCD(long int num1,long int num2,long int gcd);
int LCM(long int num1,long int num2,long int lcm);
void main()
{
clrscr();
long int num1,num2,gcd,lcm,lar,sml;
printf("Enter two numbers to find it's GCD and LCM\n");
scanf("%ld%ld",&num1,&num2);
sml=((num1>num2)?num2:num1);
lar=((num1>num2)?num1:num2);
gcd=GCD(num1,num2,sml);
lcm=LCM(num1,num2,lar);
printf("GCD = %ld and LCM = %ld",gcd,lcm);
getch();
}


int GCD(long int num1,long int num2,long int gcd)
{
long int mod1,mod2;
mod1=num1%gcd;
mod2=num2%gcd;
if(mod1==0 && mod2==0)
	{
	return gcd;
	}
else
	{
	return gcd=GCD(num1,num2,gcd-1);
	}
}


int LCM(long int num1,long int num2,long int lcm)
{
if(lcm%num1==0 && lcm%num2==0)
	return lcm;
else
	return lcm=LCM(num1,num2,lcm+1);
}



