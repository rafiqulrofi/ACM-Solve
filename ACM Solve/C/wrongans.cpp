#include<stdio.h>
 
int main()
{
    long int a,b;
    
    while(scanf("%ld %ld",&a,&b)==2)
    {
        a=a-b;
        
        if(a%10!=9)
        a++;
        else
        a--;
        
        printf("%ld\n",a);
    }
    return 0;
}











/*



#include<stdio.h>

int main()
{
	int a ,b,c=5,valu;
	
	while(true)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		
			printf("%d",valu=(a-b)+c);
	}

	return 0;
}
*/
