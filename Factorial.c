#include<stdio.h>
#include<conio.h>
void main()
{
int i,fact;
printf("Enter a number:");
scanf("\n %d",&i);
fact=1;
while(i>=1)
{
fact=fact*i;
i--;
}
printf("Factorial of number is:%d",fact);
getch();
}
