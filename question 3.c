#include<stdio.h>
int main ()
{
int ld,id,sd,i=0,num=1;
printf("Enter your ID number: ");
scanf("%d",&id);
ld=id%10;
sd=(id/10)%10;
while(i<10)
{ if (num%ld==0&&num%sd==0)
printf("\n Numbers divisible by the last two digits of your ID is %d",num);
i++;
num++; }
return 0; }
