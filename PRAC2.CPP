#include<stdio.h>
#include<conio.h>
//Calculator using switch
void main()
{
clrscr();
int num1,num2,ans;
int o;
printf("Enter Two Integer Number to perform operations\n");
scanf("%d%d",&num1,&num2);
printf("Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter 5 for Remainder\n");
scanf("%d",&o);
switch(o)
	{
	case 1:
		ans=num1+num2;
		printf("Addition:- %d+%d=%d",num1,num2,ans);
		break;
	case 2:
		ans=num1-num2;
		printf("Subtraction:- %d-%d=%d",num1,num2,ans);
		break;
	case 3:
		ans=num1*num2;
		printf("Multiplication:- %dx%d=%d",num1,num2,ans);
		break;
	case 4:
		ans=num1/num2;
		printf("Division:- %d/%d=%d",num1,num2,ans);
		break;
	case 5:
		ans=num1%num2;
		printf("Remainder of division %d/%d is %d",num1,num2,ans);
		break;
	default:
		printf("Wrong Option Selected Program cancelled...");
	}
getch();
}