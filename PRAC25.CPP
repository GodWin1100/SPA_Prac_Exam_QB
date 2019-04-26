#include<stdio.h>
#include<conio.h>
//structure employee details>>sort
struct Employee
{
char empname[20];
int empage,empsalary,d,m,y;
};
void main()
{
clrscr();
int i,j,n;
printf("Enter number of Employee details to enter\n");
scanf("%d",&n);
struct Employee e[100],temp;
for(i=0;i<n;i++)
	{
	printf("Enter Name of Employee\n");
	scanf("%s",e[i].empname);
	printf("Enter Age of Employee\n");
	scanf("%d",&e[i].empage);
	printf("Enter Salary of Employee\n");
	scanf("%d",&e[i].empsalary);
	printf("Enter Date of joining in format dd/mm/yyyy\n");
	printf("Enter Day of joining:- ");
	scanf("%d",&e[i].d);
	printf("Enter Month of joining:- ");
	scanf("%d",&e[i].m);
	printf("Enter Year of joining:- ");
	scanf("%d",&e[i].y);
	printf("\n\n");
	}
for(i=0;i<n-1;i++)
	{
	for(j=1;j<n;j++)
		{
		if(e[j].empsalary>e[j+1].empsalary)
			{
			temp=e[j+1].empsalary;
			e[j+1].empsalary=e[j].empsalary;
			e[j].empsalary=temp;
			}
		}
	}
printf("\n__________________________________________________________\n");
printf("Employee Name\tAge of Employee\tSalary of Employee\tDate of Joining\n");
for(i=0;i<n;i++)
	printf("%s\t\t%d\t\t%d\t\t\t%d/%d/%d\n",e[i].empname,e[i].empage,e[i].empsalary,e[i].d,e[i].m,e[i].y);
getch();
}

