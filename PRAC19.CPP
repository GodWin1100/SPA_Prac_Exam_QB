#include<stdio.h>
#include<conio.h>
//Equal or different 2 numbers
void main()
{
clrscr();
float num1,num2;
printf("Enter two numbers to compare\n");
scanf("%f%f",&num1,&num2);
if(num1==num2)
	{
	printf("Entered numbers %f and %f are Equal",num1,num2);
	}
else
	{
	printf("Entered numbers are not equal\n");
	if(num1>num2)
		{
		printf("%f is greater than %f",num1,num2);
		}
	else
		{
		printf("%f is greater than %f",num2,num1);
		}
	}
getch();
}
