#include <stdio.h>
void main()
{
int i,no;

printf("\n Enter number");
scanf("\n%d",&no);
for ( i = 2; i <=no; i++)
{
    if(no%i==0)
    break;
}
if (i==0)
printf("Prime number");
else
printf("Not Prime");
getch();

}
