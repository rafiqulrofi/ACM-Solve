#include <stdio.h>
 
int main()
{
	int t,number,sum = 0;
 
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&number);
 
		while(number)
		{
			sum = sum + (number % 10);
			number = number / 10;
		}
		printf("%d\n",sum);
		sum = 0;
	}
 
	return 0;
}
