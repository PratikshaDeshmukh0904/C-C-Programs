#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("\n Enter Any Number:");
scanf("%d ",&n);
printf("\n The divisors of :\n\n");
for(i=1;i<=n;i++)
if(n%i==0)
{
    printf("%d\t",i);
}
getch();
}
