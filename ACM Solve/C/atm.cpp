#include<stdio.h>
int main()
{
int i;
float j, k;
scanf("%d %f",&i,&j);
if((i%5==0)&&(i+0.5<=j))
{
j=j-i;
k=j-0.50;
}
else
{
    k=j;
}
printf("%.2f \n",k);
 
return 0;
}
