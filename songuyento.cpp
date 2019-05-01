#include<stdio.h>
#include<math.h>

int main()
	{
		int a,b=1;
		printf("nhap vao mot so : ");
		scanf("%d",&a);
	   for(int i=2;i<=sqrt(a);i++)
			{
				if(a%i==0)
				b=0;
			}
		if(a>=2&&b==1)
			{
				printf("%d la so nguyen to\n",a);
			}
		else{
				printf("%d khong phai la so nguyen to\n",a);
		}
		
	return 0;
	}
