#include<stdio.h>

int main()
	{
		int a;
		int uoc=0;
		printf("nhap vao mot so : ");
		scanf("%d",&a);
		for(int i=1;i<a;i++)
			{
				if(a%i==0)
					{
						printf("uoc cua %d la %d\n",a,i);
						uoc=uoc+i;
						
			
					}
					
			}
			if(uoc==a)
				 {
				 	printf("tong cac uoc cua %d = %d\n",a,a);
					printf("%d la so hoan hao",a);
				 }
			else{
					printf("tong cac uoc cua %d khong bang %d\n",a,a);
					printf("%d khong la so hoan hao",a);
				}
				
			return 0;
	}
