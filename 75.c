#include<stdio.h>
int main()
{
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;//q[0]���� 
	//��ʼ������ 
	head=1;
	tail=10;//ָ���β�ĺ�һλ 
	while(head<tail)
	{
		printf("%d ",q[head]);
		head++;
		q[tail]=q[head];
		tail++;
		head++;
	}
	system("pause");
	return 0;
}
