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
	//初始化队列 
	q.head=1;
	q.tail=1;//指向队尾的后一位 
	for(i=1;i<=9;i++)
	{
		//插入九个数 
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
