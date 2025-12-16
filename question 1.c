#include<stdio.h>
#include<math.h>
int main ()
{int t,p=1000;
float a,r=5;
printf("\n\t~Years\tTotal Amount~");
for(t=1;t<=10;t++)
{a=p*pow((1+r/100),t);
printf("\n\t %d\t%.2f",t,a);}
return 0;}
