#include<stdio.h>
int main ()
{ int t,t_a=10000,t_b=8000;
for(t=1;t_b<=t_a;t++)
{
t_a=t_a+250;
t_b=t_b+400; }
printf("\t~YEARS PASSED:%d~",t);
printf("\n~Town A population \tTown B
population~");
printf("\n\t%d \t\t\t%d",t_a,t_b);
return 0;}
