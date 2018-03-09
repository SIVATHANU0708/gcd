#include<stdio.h>
int main()
{
int no1,no2,i,gcd;
printf("enter two numbers:");
scanf("%d%d",&no1,&no2);
for(i=1;i<=no1&&i<=no2;i++)
{
if(no1%i==0 && no2%i==0)
{
gcd=i;
}
}
printf("gcd of two numbers is %d",gcd);
return 0;
}
