#include <stdio.h>
#include <stdlib.h>
int main ()
{
	printf("请输入百分制成绩:  \n");		//给予用户输入提示
	int grade=0;							//定义一个整数变量grade
	scanf("%d",&grade);						//用户输入整数成绩给grade
	
	int m=grade/10;							//定义一个m，m是grade的十位数，由于c语言计算不计算小数点后，所以可以用/10的方法来求十位数
	switch (m)      						//switch括号后跟的必须是整数结果
	{
	case 10:								//case后跟的可以是整数常数，也可以是其计算结果
	case 9:	printf("您的等级是A\n");
	break;									//case不具有分割功能，可将其想象成站台，只有遇到break才离开switch
	                    
	case 8:	printf("您的等级是B\n");
	break;
	
	case 7:	printf("您的等级是C\n");
	break;
	
	case 6:	printf("您的等级是D\n");
	break;
	
	case 5:	
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:	printf("您的等级是E\n");
	break;
	
	default:								//除了case之外所有的情况用default
	printf("您输入的成绩无效\n");
	break;
		
	}
	system ("pause");
	
	return 0;
		
	
}