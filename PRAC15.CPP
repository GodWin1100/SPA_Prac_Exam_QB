#include<stdio.h>
#include<conio.h>
//swap two numbers using call by address
int swap(int *x, int *y);
void main()
{
clrscr();
int num1,num2;
printf("Enter two numbers to swap\nFirst number :- ");
scanf("%d",&num1);
printf("Second number :- ");
scanf("%d",&num2);
printf("\n\nBefore Swapping\nFirst Number :- %d\tSecond Number :- %d\n",num1,num2);
swap(&num1,&num2);
printf("\nAfter Swapping\nFirst Number :- %d\tSecond Number :- %d\n",num1,num2);
getch();
}


int swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
return *x,*y;
}
