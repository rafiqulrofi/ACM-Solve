#include<stdio.h>
int main()
{
	int n,t,i;
	scanf("%d",&t);

	while(t--)
	{
	
	int counter=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		counter=counter*i;
	
	}
	printf("%d\n",counter);
	
	
	
}
	return 0;
}


