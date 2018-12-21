#include <stdio.h>
int main(void) {
	int t,n,fact;
	scanf("%d",&t);
	while(t--){
	    for(fact=1,scanf("%d",&n);n>1;fact*=n,n--);
	    printf("%d\n",fact);
	}return 0;
}
