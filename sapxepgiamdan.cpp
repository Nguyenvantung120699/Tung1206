#include<stdio.h>

int main()
	{
		int i,j,temp;
		int n;
		printf("***************************************************");
		printf("\n");
		printf("       HELLO - WELLCOME TO PROGRAM OF ME :)");
		printf("\n");
		printf("***************************************************");
		printf("\n");
		 printf("xin moi nhap so luong phan tu cua mang : ");
	
		do{
        scanf("%d", &n);
        if(n <2){
        	printf("\n");
        	printf("so luong phan tu khong du de sap xep \n");
        	printf("\n");
        	printf("so luong phan tu cua mang it nhat phai tren hai phan tu \n");
        	printf("\n");
            printf("  -->xin moi nhap lai so luong phan tu cua mang : ");
        }
    }while(n <2);
    int mang[n];
    	printf("\n");
    	printf("**** NHAP VAO %d PHAN TU CUA MANG KHONG TRUNG NHAU : ****\n ",n);
		printf("\n");
    for(int i = 0; i < n; i++)
		{
        	printf("Nhap phan tu thu [%d] = ",i);
       		scanf("%d",&mang[i]);
       	}
       	for(int i=0;i<n-1;i++)
			{
				for(int j=0;j<n-i-1;j++)
					{
						if(mang[j]<mang[j+1])
							{
								int temp=mang[j];
								mang[j]=mang[j+1];
								mang[j+1]=temp;
							}
					}
			}
				printf("********************************************************************************");
				printf("\n");
				printf("\n");
				printf("   MANG DUOC SAP XEP THEO THU TU GIAM DAN LA :");
				for(int i = 0; i <=n-1; i++)
					{
						printf(" %d ", mang[i]);
					}
				printf("\n");
				printf("\n");
				printf("********************************************************************************");
		printf("\n");	
		printf("\n");
		printf("****** NGUYEN VAN TUNG ******");
			
			
			return 0;
	}
