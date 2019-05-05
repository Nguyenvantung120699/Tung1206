#include<stdio.h>

int main()
	{
		long a=1;
		long b=1;
		long c=1;
		for(int i=2;i<=100;i++)
			{
				c=a+b;
				a=b;
				b=c;
			}
		printf("so fibonaci thu 100 la : %ld \n",c);
		
			
		return 0;
			
	}
