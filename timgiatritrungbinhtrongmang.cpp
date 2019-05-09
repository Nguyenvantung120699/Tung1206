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
		do{
        scanf("%d", &n);
        if(n <= 1){
        	printf("\n");
        	printf("so luong phan tu khong hop le \n");
        	printf("\n");
        	printf("so luong phan tu cua mang it nhat phai tren hai phan tu \n");
        	printf("\n");
            printf("    -->xin moi nhap lai : ");
        }
    	}while(n <= 1);
    	int mang[n];
  		  for(int i = 0; i < n; i++)
			{
				printf("\n");
        		printf("Nhap phan tu thu [%d] = ",i);
       			scanf("%d",&mang[i]);
       		}
  		 int a, b;
   			float c;
   			a = c = 0;
   			for(b = 0; b < n; b++) 
			   {
      				a = a + mang[b];
   				}
   			c = (float)a / b; 
   			printf("********************************************************");
   			printf("\n");
   			printf("        Gia tri trung binh cua mang la: %f", c);   
   			printf("\n");
   			printf("********************************************************");
   
   
   		printf("\n");	
		printf("\n");
		printf("****** NGUYEN VAN TUNG ******");
		
  			 return 0;
	}
