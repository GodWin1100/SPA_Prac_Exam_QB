#include<stdio.h>
#include<conio.h>
//matrix multiplication
void main()
{
clrscr();
int m1,m2,n1,n2,i,j,k,a[10][10],b[10][10],c[10][10];
printf("Enter number of rows and columns for first matrix respectively\n");
scanf("%d%d",&m1,&n1);
printf("Enter number of rows and columns for second matrix respectively\n");
scanf("%d%d",&m2,&n2);
if(n1==m2)
	{
	printf("Enter elements of first matrix\n");
	for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
		}
	printf("Elements in first matrix of dimension %dx%d are:-\n",m1,n1);
	for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
		}
	printf("\n\nEnter elements of second matrix\n");
	for(i=0;i<m2;i++)
		{
		for(j=0;j<n2;j++)
			scanf("%d",&b[i][j]);
		}
	printf("Elements in second matrix of dimension %dx%d are:-\n",m2,n2);
	for(i=0;i<m2;i++)
		{
		for(j=0;j<n2;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
		}
	printf("\nMultiplication of above two matrices is:-\n");
	for(i=0;i<m1;i++)
		{
		for(j=0;j<n2;j++)
			{
			c[i][j]=0;
			for(k=0;k<n2;k++)
				{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}

	}
else
	{
	printf("Matrix with such dimension cannot be multiplied");
	}
getch();
}
