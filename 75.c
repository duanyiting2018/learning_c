#include<stdio.h>
struct queue
{
	int data[100];
	int head;
	int tail;
};
int main()
{
	struct queue q;
	int i;
	//��ʼ������ 
	q.head=1;
	q.tail=1;//ָ���β�ĺ�һλ 
	for(i=1;i<=9;i++)
	{
		//����Ÿ��� 
		scanf("%d ",&q.data[q.tail]);
		q.tail++;
	}
	while(q.head<q.tail)
	{
		printf("%d ",q.data[q.head]);
		q.head++;
		q.data[q.tail]=q.data[q.head];
		q.tail++;
		q.head++;
	}
	system("pause");
	return 0;
}
