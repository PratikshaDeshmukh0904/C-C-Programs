#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b,s,p;
clrscr();
printf("\n Enter a binary no");
scanf("%d",&a);
s=0;
p=0;
while(a>0)
{

    b=a%10;
    s=s+b*pow(10,p);
    a=a/10;
    p++;
}
printf("\n Decimal no:%d",s);
getch();
}
