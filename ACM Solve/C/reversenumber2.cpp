#include<stdio.h>

int main()
{

	
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,stor=0,mod;
	scanf("%d",&n);
	
	while(n!=0)
	{
		mod=n%10;
		stor=stor*10+mod;
		n/=10;
	
		
	}
	
	printf("%d\n",stor);
}
	return 0;
}
