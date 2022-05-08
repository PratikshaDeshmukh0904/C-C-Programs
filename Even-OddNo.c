#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter A Number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("Number is even no");
    else
        printf("Odd No");
    getch();

}
