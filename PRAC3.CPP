#include<stdio.h>
#include<conio.h>
//prime number using for
void main()
{
clrscr();
int n,i,rem;
printf("Enter number to check whether it is Prime Number or not\n");
scanf("%d",&n);
for(i=2;i<=n/2+1;i++)
	{
	rem=n%i;
	if(rem==0)
		{
		printf("\n%d is not a Prime Number...",n);
		break;
		}
	}
if(rem!=0)
	printf("\n%d is a Prime Number!!!",n);
getch();
}