#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter any two number : \n");
scanf("%d%d",&a,&b);
printf("The bitwise and value of a&b=%d\n",a&b);
printf("The bitwise OR value of a|b\n",a|b);
printf("The bitwise not value of a=%d\n",~a);
printf("The bitwise XOR of a^b=%d\n",a^b);
printf("The bitwise left shift a<<2=%d\n",a<<2);
printf("The bitwise Right Shift a>>1=%d\n",a>>1);
getch();
}