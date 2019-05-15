#include<stdio.h>
#include<malloc.h>

int main()
		
	{
    	int *mang;
    	mang = (int*)malloc(10*sizeof(int));
  		  for(int i = 0; i < 10; i++)
			{
				printf("\n");
        		printf("Nhap phan tu thu [%d] = ",i);
       			scanf("%d",mang+i);
       		}
  		 int a, b;
   			float c;
   			a = c = 0;
   			for(b = 0; b < 10; b++) 
			   {
      				a = a + *(mang+b);
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
