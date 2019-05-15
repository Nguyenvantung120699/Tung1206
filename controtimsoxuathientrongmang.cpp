#include<stdio.h>
#include<malloc.h>

int main()
	{
	
		int *mang;
		mang=(int*)malloc(10*sizeof(int));
		for(int i=0;i<10;i++)
			{
				printf("\n");
				printf("nhap vao phan tu thu [%d] : ",i);
				scanf("%d",mang+i);
			}

		int low=0,high=10,mid;
		int flag=0;
		int socantim;
		int *p=&socantim;
		printf("\n");
		printf("nhap so can tim : ");
		scanf("%d",p);
	while(low<=high){

 			int mid=low+(high-low)/2;
 			if(*p==*(mang+mid)){

 				flag=1; 
 				printf("********************************************");
 				printf("\n");
 				printf("           SO VUA NHAP LA %d\n",*p);
 				printf("\n");
 				printf("   SO VUA NHAP THUOC PHAN TU TRONG MANG\n");
 				printf("\n");
 				int dem=0;
 				for(int i=0;i<10;i++)
 					{
 						if(*(mang+mid)==*p)
							{
								dem++;
							}
 					}
 					printf("  SO VUA NHAP XUAT HIEN %d LAN TRONG MANG",dem);
 					printf("\n");
 					printf("********************************************");
 					printf("\n");
 				break;
			 }else if(socantim<*(mang+mid)){
			 	high=mid-1;
			 }else if(socantim>*(mang+mid)){
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
		 
		 free(mang);
		}
