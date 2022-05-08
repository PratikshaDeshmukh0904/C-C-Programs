#include<stdio.h>

void main()
{
int a,b,c;
printf("Enter the first number,second number,third number \n");
scanf("\n %d %d %d",&a ,&b,&c);
printf("a =%d\t b = %d\t c =%d \n",a,b,c);

if(a>b)
{
    if(a>c)
        {
        printf("%d is max no",&a);
    }
    else{
         printf("%d is max no",&c);
    }
}
else if(b>c)

     printf("%d is max no",&b);

else

     printf("%d is max no",&c);


}
