#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		scanf("%d",&a);
		if(a<10)
		{
			printf("What an obedient servant you are!\n");
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}

