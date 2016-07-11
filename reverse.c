#include<stdio.h>
void main()
{
int n,sum=0,num;
printf("enter the integer:");
scanf("%d",&n);
while(n!=0)
{
num=n%10;
sum=sum*10+num;
n=n/10;
}
printf("revesed number= %d",num);
}
