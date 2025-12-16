#include<stdio.h>
int main ()
{
int f=1,sum,i=1;
printf("Enter the sum of the last two digits of your ID number: ");
scanf("%d",&sum);
for(i=1;i<=sum;i++)
{f=f*i;}
printf("\nthe factorial of sum of last digits is %d",f);
return 0;
}
