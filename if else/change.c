#include <stdio.h>
#include <stdlib.h>
int main()
{
	double price=0;
	printf("请输入商品价格： \n");
	scanf("%lf",&price);
	
	double pay=0;
	printf("请输入支付金额： \n");
	scanf("%lf",&pay);
	
	double change=price-pay;
	
	if(price > pay)     {printf("找您%f元\n",change);
	}
	else {printf("余额不足\n");
	}
	
	system("pause");
	
	return 0;


	}
	