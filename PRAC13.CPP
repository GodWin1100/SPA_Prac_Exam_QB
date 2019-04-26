#include<stdio.h>
#include<conio.h>
//addition of matrix except diagonal elements using functions
int matsum(int n,int a[100][100])    //int is required to return value unlike void in PRAC12
{
int sum=0;
for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
		{
		if(i!=j)
			{
			sum=sum+a[i][j];
			}
		else
			{
			sum=sum+0;
			}
		}
	}
return sum; //return is mandatory while using int
}


void main()
{
clrscr();
int dim,mat[100][100],i,j;
printf("Enter dimension of square matrix to find sum of non-diagonal elements\n");
scanf("%d",&dim);
printf("Enter elements of matrix :-\n");
for(i=0;i<dim;i++)
	{
	for(j=0;j<dim;j++)
		scanf("%d",&mat[i][j]);
	}
printf("Matrix is\n");
for(i=0;i<dim;i++)
	{
	for(j=0;j<dim;j++)
		printf("%d\t",mat[i][j]);
	printf("\n");
	}
int sum=matsum(dim,mat);
printf("Addition of non diagonal elements is:- %d",sum);
// or can use===> printf("Addition of non diagonal elements is:- %d",matsum(dim,mat));
getch();
}

