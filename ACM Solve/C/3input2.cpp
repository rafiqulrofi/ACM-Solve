#include <stdio.h>





int main()
{
    int i,n, count = 0,a[1005][10];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int c = 0;
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j])
                count++;
        }
        if(c >= 2)
            count ++;
    }
    printf("%d\n", count);
}
