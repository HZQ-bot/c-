#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0;
	printf("请输入一个三位数：  \n");
	scanf("%d",&x);
	
	int a=x/100;                 //百位上的数字
	int b=x/10%10;               //十位
	int c=x%10;                  //个位
	int number=c*100+b*10+a;
	
	printf("逆序数是%d",number);
	
	system ("pause");
	
	return 0;
}