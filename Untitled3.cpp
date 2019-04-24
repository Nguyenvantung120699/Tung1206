#include<stdio.h>

int main()
	{
		int a;
		printf("nhap vao mot so : ");
		scanf("%d",&a);
		switch(a)
			{
				case 2: printf("hom nay la thu hai \n");break;
				case 3: printf("hom nay la thu ba \n");break;
				case 4: printf("hom nay la thu tu \n");break;
				case 5: printf("hom nay la thu nam \n");break;
			    case 6: printf("hom nay la thu sau \n");break;
			    case 7: printf("hom nay la thu bay \n");break;
			    case 80: printf("hom nay la chu nhat \n");break;
			    default: printf("khong co ngay trong tuan");
			}
		
				
				
			return 0;
			
		}
			
