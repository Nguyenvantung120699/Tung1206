#include<stdio.h>

int main()
	{
		int a;
		printf("nhap vao mot so tu ban phim : ");
		scanf("%d",&a);
		if(a<=0)
			{
				printf("so %d khong co uoc",a);
			}
		for(int i=1;i<=a;i++)
			{
				if(a%i==0)
					{
						printf("uoc cua %d la : %d\n",a,i);	
					}
			}
		return 0;
	}
