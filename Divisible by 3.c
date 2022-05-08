#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("\n Enter a number:");
scanf("\n %d",&num);
if(num%3==0)
printf("%d is divisible by 3",num);
else
printf("%d is  not divisible by 3",num);
getch();
}
