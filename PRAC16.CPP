#include<stdio.h>
#include<conio.h>
//reverse order of array printing by using pointers
void main()
{
clrscr();
int n,a[100],*ptr;
printf("Enter number of elements in array\n");
scanf("%d",&n);
printf("Enter elements in array\n");
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("\n\nElements of array in order entered by user :-\n");
for( i=0;i<n;i++)
	printf("%d  ",a[i]);
ptr=a;
printf("\n\n\nElements in reverse order are:-\n");
for(i=n-1;i>=0;i--)
	printf("%d  ",ptr[i]);
getch();
}