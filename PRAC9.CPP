#include<stdio.h>
#include<conio.h>
//combination using function
int BIO(long int n,long int r)
{
long int factn=1,factr=1,factr2=1,deno,BIO;
for(int i=n;i>0;i--)
	factn=factn*i;
for( i=r;i>0;i--)
	factr=factr*i;
for( i=(n-r);i>0;i--)
	factr2=factr2*i;
deno=factr2*factr;
BIO=factn/deno;
return BIO;
}
void main()
{
clrscr();
long int n,r,bio;
printf("Enter n and r for nCr respectively\n");
scanf("%ld%ld",&n,&r);
bio=BIO(n,r);
printf("nCr is %ld",bio);
getch();
}