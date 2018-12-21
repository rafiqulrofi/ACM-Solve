#include<stdio.h>
int main()
{
	int t,i,m,n,sum=0;
	scanf("%d",&t);
	while(t>0 && t<100)
	{
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(i = n; i <= m; i++)
	{
	if(i%2==1)
	{
		sum=sum+i;
	}	

	
	
		
	
	  
	}
	printf("%d\n",sum);	
}
	

}
