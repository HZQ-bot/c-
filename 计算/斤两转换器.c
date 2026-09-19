#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1,num2;
	printf("请输入斤数和两数，如2 3 代表两斤三两");
	scanf("%d %d",&num1,&num2);
	
	double num3=((num1*0.5)+(num2*0.05));
	printf("结果是%f kg\n",num3);
	
	system("pause");
	
	return 0;
}