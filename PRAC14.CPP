#include<stdio.h>
#include<conio.h>
#include<string.h>
//concatenate first middle and last name {string}
void main()
{
clrscr();
char fn[20],mn[20],ln[20];
printf("Enter first name :\n");
scanf("%s",&fn);
printf("Enter middle name :\n");
scanf("%s",&mn);
printf("Enter last name :\n");
scanf("%s",&ln);
strcat(fn," ");
strcat(fn,mn);
strcat(fn," ");
strcat(fn,ln);
printf("\nYour full name is %s",fn);
getch();
}