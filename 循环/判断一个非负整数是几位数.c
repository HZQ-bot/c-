#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0,n=0;
	
	printf("请输入一个非负整数：  \n");
	scanf("%d",&x);
	
	if (x>0) {                                              //对0这种情况做出特殊讨论
		while (x>0) {
			n++;                                            //意思是n+=1 即n=n+1
			x/=10;                                          //消掉最末尾的数字以达到数数位的功能
		}
	} else {n=1;}
	
	printf("这个数是%d位数\n",n);
	
	system("pause");
	
	return 0;
	
}