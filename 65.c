#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10],b,t;
    for(b=0;b<=9;b++)
    a[b]=0; //��ʼС���䶼Ϊ0
    for(b=1;b<=5;b++)
    {
    printf("����5������������9����");
    scanf("%d",&t); //����5����
    a[t]=1; //��ӦС�����Ϊ1
    }
    for(b=0;b<=9;b++)
    if(a[b]==0)
    printf("%d\n",b); //���û�г��ֵ���
	system("pause");
	return 0;
}
