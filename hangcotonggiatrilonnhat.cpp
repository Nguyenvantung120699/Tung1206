#include <stdio.h>

int main()
{
    int n, m;
	int i=0,j=0;
   	do
			{
				printf("nhap so hang cua ma tran : ");
				scanf("%d",&n);
			}
		while(n<0);
		do
			{
				printf("nhap so cot cua ma tran : ");
				scanf("%d",&m);
			}
		while(m<0);
		int a[n][m];
		for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            printf("Nhap a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
    	}
     printf("\nMa tran vua nhap :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%6d", a[i][j]);
        printf("\n");
    }
	int max=0;
	int b;
    for(i=0;i<n;i++)   
	  {
	  	int s=0;
	     for(j=0;j<m;j++)
	      {
	      	s=s+a[i][j];
	      	
	      }
	    printf("\n Hang thu %d co tong la: %d",i,s);
	    printf("\n");
	     if(s>max)
		 	{
		 		max=s;
		 		b=i;
		 	}
	   } 
	   	printf("\n");
	   	printf("hang co tong gia tri lon nhat la hang thu %d , tong = %d \n",b,max);
	   
    	
   return 0;
}
