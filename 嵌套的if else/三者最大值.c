#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a=0,b=0,c=0,max=0;
	printf("请分别输入三个数字\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if (a > b)     {
	
	if (a > c) {max=a;
	}
	else {max=c;
	}
	
}
    else {
	
	if (b>c) {max=b;}
    else {max=c;
	}
}
    printf("最大的是%f\n",max);
	system ("pause");
	return 0;
}
	