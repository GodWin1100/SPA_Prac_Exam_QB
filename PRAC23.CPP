#include<stdio.h>
#include<conio.h>
//addition of 2 matrix
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10],m1,n1,m2,n2,i,j;
printf("Enter number of rows and columns for first matrix respectively\n");
scanf("%d%d",&m1,&n1);
printf("Enter number of rows and columns for second matrix respectively\n");
scanf("%d%d",&m2,&n2);
if(m1==m2 && n1==n2)
	{
	printf("Enter elemens for first matrix\n");
	for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
		}
	printf("\nFirst matrix elements are:-\n");
	for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
		}
	printf("Enter elemens for second matrix\n");
	for(i=0;i<m2;i++)
		{
		for(j=0;j<n2;j++)
			scanf("%d",&b[i][j]);
		}
	printf("\nSecond matrix elements are:-\n");
	for(i=0;i<m2;i++)
		{
		for(j=0;j<n2;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
		}
	printf("\nAddition of two matrix is\n");
	for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
			{
			c[i][j]=0;
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
	}
else
	printf("Matrix cannot be added...");
getch();
}

