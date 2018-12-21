 #include<stdio.h>
 
int main()
{
int t,n,num,ans;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
	
		ans=n%10;
		n=n/10;
		
	}
	printf("%d\n",ans+num%10);
}
   
	return 0;
	
}  
