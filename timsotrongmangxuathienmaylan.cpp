#include<stdio.h>

int main()
	{
		printf("***************************************************");
		printf("\n");
		printf("       HELLO - WELLCOME TO PROGRAM OF ME :)");
		printf("\n");
		printf("***************************************************");
		printf("\n");
		int n;
		printf("xin moi nhap so luong phan tu cua mang : ");
		do
			{
				scanf("%d",&n);
				if(n<2)
					{
						printf("\n");
        				printf("so luong phan tu khong hop le \n");
        				printf("\n");
        				printf("so luong phan tu cua mang it nhat phai co tren hai phan tu \n");
        				printf("\n");
						printf("xin moi nhap lai : ");
						scanf("%d",&n);
					}
			
			}
		while(n<2);
		int mang[n];
		int socantim;
		int dem=0;
		for(int i=0;i<n;i++)
			{
				printf("\n");
				printf("nhap vao phan tu thu [%d] : ",i);
				scanf("%d",&mang[i]);
			}
			
		int low=0,high=n,mid;
		int flag=0;
		printf("\n");
		printf("nhap so can tim : ");
		scanf("%d",&socantim);
	while(low<=high){
 			
 			int mid=low+(high-low)/2;
 			if(socantim==mang[mid]){
 				
 				flag=1; 
 				printf("********************************************");
 				printf("\n");
 				printf("           SO VUA NHAP LA %d\n",socantim);
 				printf("\n");
 				printf("   SO VUA NHAP THUOC PHAN TU TRONG MANG\n");
 				printf("\n");
 				for(int i=0;i<n;i++)
 					{
 						if(mang[i]==socantim)
							{
								dem=dem+1;
							}
 					}
 					printf("  SO VUA NHAP XUAT HIEN %d LAN TRONG MANG",dem);
 					printf("\n");
 					printf("********************************************");
 					printf("\n");
 				break;
			 }else if(socantim<mang[mid]){
			 	high=mid-1;
			 }else if(socantim>mang[mid]){
			 	low=mid+1;
			 }
		 }
 		if(flag==0){
 			printf("\n");
 			printf("so ban vua nhap khong co trong mang");
 			printf("\n");
		 }
		printf("\n");
		printf("*** NGUYEN VAN TUNG ***");
		return 0;

		}
