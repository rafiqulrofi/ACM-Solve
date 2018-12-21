#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int test ( int x, int y )
{
  int z;
  while ( x != 0 ) {
     z = x; x = y%x;  y = z;
  }
  return y;
}



int main(){
	int testcases;
	scanf("%d", &testcases);
	int i;
	for(i=0; i<testcases;i++){
		int l;
		int y;
		scanf("%d %d", &l, &y);
		printf("%d\n", (l/test(l,y)*y/test(l,y)));
	}
    return 0;
}
