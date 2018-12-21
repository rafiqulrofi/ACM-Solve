#include<stdio.h>
int main()
{
	int t,a,b,mud;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		mud=a%b;
		printf("%d\n",mud);
	}
	return 0;
}
