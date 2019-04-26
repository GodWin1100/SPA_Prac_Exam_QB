#include<stdio.h>
#include<conio.h>
#include<string.h>
//pallindrome string case sensitive
void main()
{
clrscr();
int cmp;
char input[100],copy[100];
printf("Enter String to check whether it is Pallindrome or not\n");
scanf("%s",input);
//strupr(input);// OR strlwr(input); // strupr=upper_case OR strlwr=lower_case <=== to make case insensitive convert string to lower or upper case
strcpy(copy,input);
strrev(copy);
cmp=strcmp(copy,input);
if(cmp==0)
	printf("\n%s is Pallindrome string",input);
else
	printf("\n%s is not Pallindrome string",input);
getch();
}