#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,m;
	for(n=2;n<=100;n++)
	{
		m=0;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				m=1;
				break; 
			}
		}
		if(m==0)
		printf(",%d",n);
	 } 
	 return 0;
 } 
