#include <stdio.h>

int main() 
		{
          int a, b, c, min, max;
       		printf("Nhap so a: ");
        	scanf("%d", &a);
          	printf("Nhap so b: ");
          	scanf("%d", &b);
	        printf("Nhap so c: ");
	        scanf("%d", &c);
          min=max=a;
          if(b>max)
            max=b;
          if(c>max)
            max=c;
          printf("\nSo lon nhat la %d", max);
          if(b<min)
            min=b;
          if(c<min)
            min=c;
          printf("\nSo nho nhat la %d", min);

}
