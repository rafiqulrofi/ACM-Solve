#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,num;
		scanf("%d",&a);
		scanf("%d",&b);
		num=pow(a,b);
		printf("%d\n",num);
	}
	return 0;
}
