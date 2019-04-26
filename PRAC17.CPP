#include<stdio.h>
#include<conio.h>
//structure of player and displaying output after sorting
struct Player
{
char pname[20],tname[20];
int bavg;
};
void main()
{
clrscr();
int n,i,j;
printf("Enter number of players\n");
scanf("%d",&n);
struct Player p[20],temp;
for(i=0;i<n;i++)
	{
	printf("Enter Name of Player\n");
	scanf("%s",p[i].pname);
	printf("Enter Name of Team\n");
	scanf("%s",p[i].tname);
	printf("Enter Batting Average of Player\n");
	scanf("%d",&p[i].bavg);
	}
for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1;j++)
		{
		if(p[j].bavg>p[j+1].bavg)
			{
			temp=p[j+1];
			p[j+1]=p[j];
			p[j]=temp;
			}
		}
	}
printf("\n_______________________________________________________________\n");
printf("Player Name\tTeam Name\tBatting Average\n");
for(i=n-1;i>=0;i--)
	{
	printf("%s\t\t%s\t\t",p[i].pname,p[i].tname);
	printf("%d\n",p[i].bavg);
	}
getch();
}
