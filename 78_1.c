#include<stdio.h>
#include<stdlib.h>//!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main()
{
	int *p;//����ָ��p
	p=(int *)malloc(sizeof(int));//ָ��p��̬�����ڴ�ռ��ַ
	*p=10;
	printf("%d",*p);
	system("pause");
	return 0; 
}
