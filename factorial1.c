#include<stdio.h>
#include<conio.h>

void main()
{
int fact(int);
int i,f,num;
clrscr();
printf("Enter any number: ");
scanf("%d",&num);
f=fact(num);
printf("Factorial: %d",f);
getch();
}

int fact(int n)
{
if(a<0)
return(-1);
if(a==0)
return(1);
else
{
return(n*fact(n-1));
}
}
