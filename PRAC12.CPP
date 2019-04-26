#include<stdio.h>
#include<conio.h>
//bubble sorting ascending order using function
void sort(long int m,long int b[100]);
void main()
{
clrscr();
long int n,i,j,temp,a[100];
printf("Enter number of elements in array\n");
scanf("%ld",&n);
printf("Enter elements in array\n");
for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
sort(n,a);
printf("Elements in ascending order :-\n");
for(i=0;i<n;i++)
	printf("%ld\t",a[i]);
getch();
}


void sort(long int m,long int b[100])
{
int temp;
for(int i=0;i<m-1;i++)
	{
	for(int j=0;j<m;j++)
		{
		if(b[j]>b[j+1])
			{
			temp=b[j+1];
			b[j+1]=b[j];
			b[j]=temp;
			}
		}
	}
}