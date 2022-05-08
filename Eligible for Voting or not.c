#include<stdio.h>
#include<conio.h>
void main()
{
int age;
printf("Enter age of person:");
scanf("\n %d",&age);
if(age>=18)
    printf("person is eligible for voting",age);
else
    printf("person is not eligible for voting",age);
getch();

}
