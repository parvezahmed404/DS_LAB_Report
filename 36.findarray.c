// 36. A. Find Array(1608)

#include <stdio.h>
int main()
{	int a,t;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&a);
		for(int i=2;i<=a+1;i++) printf("%d ",i);
		printf("\n");}
	return 0;}
