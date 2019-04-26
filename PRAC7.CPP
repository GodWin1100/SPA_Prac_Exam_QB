#include<stdio.h>
#include<conio.h>
//create array and print largest and second largest element after sorting it
void main()
{
clrscr();
int sort[100],i,n,j,temp;
printf("Enter how many element to enter in array\n");
scanf("%d",&
n);
printf("Enter numbers of array for %d times\n",n);
for(i=0;i<n;i++)
	scanf("%d",&sort[i]);
for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1;j++)
		{
		if(sort[j]>sort[j+1])
			{
			 temp=sort[j+1];
			 sort[j+1]=sort[j];
			 sort[j]=temp;
			 }
		}
	}
printf("Largest number is %d and second largest number is %d",sort[n-1],sort[n-2]);
getch();
}


