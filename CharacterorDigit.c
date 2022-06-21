#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter Any Character:");
scanf("\n %c",ch);
if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
{
    printf("\nCharacter is Alphabet",ch);
}

else if(ch>=0 && ch<=9)
{
    printf("\n Character is digits",ch);
}

else
{
      printf("\n Character is special character",ch);
}
  getch();
}
