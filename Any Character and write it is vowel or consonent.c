#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\n Enter Any Character:");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
case 'e':
case 'E':
printf("%c is vowel",ch);
break;
default:
printf("%c is consonent",ch);
}
getch();
}
