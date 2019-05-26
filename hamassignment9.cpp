#include<stdio.h>

 
void Nhap_Ma_Tran(int a[4][4],int n=4)
{
	int i,j;
    for ( i=0; i<n; i++)
        for ( j=0; j<n; j++)
        {
            printf("\nNhap a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
}
 
void In_Ma_Tran(int a[4][4],int n=4)
{
	int i,j;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}
void Nhap_Ma_Tran2(int b[4][4],int n=4)
{
	int i,j;
    for ( i=0; i<n; i++)
        for ( j=0; j<n; j++)
        {
            printf("\nNhap b[%d][%d]: ",i,j);
            scanf("%d", &b[i][j]);
        }
}
 
void In_Ma_Tran2(int b[4][4],int n=4)
{
	int i,j;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
}
void ma_tran_tong(int a[4][4],int b[4][4],int c[4][4])
	{
		printf("ma tran tong la : \n");
	 	for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
						printf("%4d",c[i][j]);
					}
					printf("\n");
					
			}
		}
	
	void ma_tran_hieu(int a[4][4],int b[4][4],int c[4][4])
	{
		printf("ma tran hieu la : \n");
		for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
					{
						c[i][j]=a[i][j]-b[i][j];
						printf("%4d",c[i][j]);
					}
					printf("\n");
					
			}
	
		}
	void ma_tran_tich (int a[4][4],int b[4][4],int c[4][4])
	{
		printf("ma tran tich la : \n");
		for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
					{
						c[i][j]=a[i][j]*b[i][j];
						printf("%4d",c[i][j]);
					}
					printf("\n");
					
			}
	
		}

 
int main()
{
	int n=4;
    int a[4][4];
    int b[4][4];
    int c[4][4];
    printf("nhap ma tran 1 :\n");
    Nhap_Ma_Tran(a,n);
    printf("ma tran vua nhap : \n");
    In_Ma_Tran(a,n);
    printf("nhap vao ma tran thu 2 \n:");
    Nhap_Ma_Tran2(b,n);
    printf("ma tran vua nhap : \n");
    In_Ma_Tran2(b,n);
    ma_tran_tong(a,b,c);
    ma_tran_hieu(a,b,c);
    ma_tran_tich(a,b,c);
    
   
    
    return 0;
}
