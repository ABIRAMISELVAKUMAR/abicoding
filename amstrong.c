#include<stdio.h>
int main();
{
int n,temp,sum=o;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
reminder=temp%10;
sum=sum+reminder*reminder*reminder;
temp=temp/10;
}
if(n==sum)
printf("%d=amstrong no",sum);
else
printf("%d is not amstrong no",sum);
return 0;
}
