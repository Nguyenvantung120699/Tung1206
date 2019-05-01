#include<stdio.h>

int main()
	{
	int a=200;
	int i=0;
	int Tong=0;
	
	for(i;i<a;i++)
		{
			if(i%2!=0)
				{
					printf("%d\n+\n",i);
					Tong = Tong + i;
				}		
		}
		printf("tong cua 100 so le dau tien la : %d\n",Tong);
		
		
		return 0;
	}
