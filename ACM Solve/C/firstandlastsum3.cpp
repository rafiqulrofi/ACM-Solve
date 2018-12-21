#include<stdio.h>
int main()
{
	
int t,sum,n,num;
scanf("%d",&t);
while(t--)
{


scanf("%d",&n);
num=n;
while(n>0)
{
	
	sum=n%10;
	n=n/10;
}
printf("%d",sum+num%10);

}
return 0;
}
