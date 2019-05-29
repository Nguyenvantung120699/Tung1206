#include<stdio.h>


	int isPrime (int n,int dem=0)
		{
			printf("nhap vao mot so : ");
			scanf("%d",&n);
			for(int i=1;i <= n;i++)
				{
					if(n%i==0)
						{
							dem++
						}
				}
			if(dem==2)
				{
					return n;
				}
			else{
				return 0;
			}
		}
	int main()
		{
			int n;
			int dem=0;
			isPrime(n,dem);
		
			return 0;
		}
