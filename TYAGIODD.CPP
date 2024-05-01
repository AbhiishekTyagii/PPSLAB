#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter any no.");
scanf("%d",&num);
switch(num%2==0){
case 1:printf("Number is even");
break;
case 0:printf("Number is odd");
}
getch();
	}