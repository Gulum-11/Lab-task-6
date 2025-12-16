#include<stdio.h>
int main ()
{
int id,rid,num;
printf("Enter your ID number: ");
scanf("%d",&id);
for(int i=1;i<=4;i++)
{
num=id%10;
rid=rid*10+num;
id=id/10;
}
printf("the reversal of your id number is %d ",rid);
return 0;}
