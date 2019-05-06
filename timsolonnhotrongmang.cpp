include<stdio.h>


int main()
	{ 
		int mang[10];
		int i ;
		int Min,Max = 0;
		for(i = 0 ; i < 10 ; i++ )
		{
			printf("Phan Tu Thu %d :",i);
			scanf("%d",&mang[i]);
		}
		printf("MANG VUA NHAP LA : ");
		for(i = 0 ; i < 10 ; i++)
		{
			printf("%d   ",mang[i]);
		}
		printf("\n");
		Max = mang[0];
		for(i = 0 ; i < 10 ; i++)
		{
			if(Max < mang[i])
			{
				Max = mang[i];
			}
		}
		printf("**********************************\n");
		printf("PHAN TU LON NHAT LA : %d \n ",Max);
		printf("**********************************\n");
		Min = mang[0];
		for(i = 0; i < 10 ; i++)
		{
			if(Min > mang[i])
			{
				Min = mang[i];
			}
		}
		printf("PHAN TU NHO NHAT LA : %d \n",Min);
		printf("**********************************");
		return 0;
	}
