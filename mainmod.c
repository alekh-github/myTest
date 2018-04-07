#include <stdio.h>
#include "odd.h"
#include "prime.h"
int main()
{
	int n,a,b;
	printf("enter the no.");
	scanf("%d",&n);
	a=odd(n);
	if(a==1)
	{
		b=prime(n);
	}
	printf("the output is %d   %d",a,b);
	return 0;
}
