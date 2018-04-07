#ifndef PRIME_H_INCLUDED
#define PRIME_H_INCLUDED
int prime(int n)
{
	int i,x;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			x=0;
		}
		else
		x=1;
	}
	return x;
}


#endif
