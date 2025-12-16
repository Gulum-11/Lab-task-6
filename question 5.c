#include<stdio.h>
int main ()
{
int id,a,b,c,d,sum;
printf("Enter your ID number: ");
scanf("%d",&id);
a=id%10;
b=id/10%10;
c=id/100%10;
d=id/1000%10;
sum=a+b+c+d;
printf("\nthe sum of the last 4 digits of your ID number is %d",sum);
return 0;}
