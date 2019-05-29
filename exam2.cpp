#include<stdio.h>
	
	int main()
		{
			int m,n;
			printf("nhap vao so m = ");
			scanf("%d",&m);
			printf("nhap vao so n = ");
			scanf("%d",&n);
			int dem=0;
				for(int i=m;i<n;i++)
					{
						if(n%i==2)
							{
								dem++;
							}	
						if(dem==2)
							{
								printf("%4d",&i);
							}		
					}
							
				
			return 0;
		}
