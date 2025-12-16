#include<stdio.h>
int main ()
{
int b,e,r=1;
printf("Enter a base number: ");
scanf("%d",&b);
printf("Enter a non-negative exponent number: ");
scanf("%d",&e);
for(int i=1;i<=e;i++)
{ r=r*b; }
printf("the result is: %d ",r);
return 0;}
