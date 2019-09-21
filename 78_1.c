#include<stdio.h>
#include<stdlib.h>//!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main()
{
	int *p;//定义指针p
	p=(int *)malloc(sizeof(int));//指针p动态分配内存空间地址
	*p=10;
	printf("%d",*p);
	system("pause");
	return 0; 
}
