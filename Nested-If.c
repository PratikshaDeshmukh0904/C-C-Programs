#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n Enter Three Numbers:");
scanf("\n %d %d %d",&a,&b,&c);
if(a>b)
{
 if(a>c)
 {
     printf("\n %d is maximum no",a);
 }
 else{
    printf("\n %d is maximum no",b);
 }
}
 else{
    if(b>c)

 {
     printf("\n %d is maximum no",b);
 }
 else{
    printf("\n %d is maximum no",c);
 }
}
getch();
}
