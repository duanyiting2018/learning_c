#include<stdio.h>
int main()
{
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;//q[0]不用 
	//初始化队列 
	head=1;
	tail=10;//指向队尾的后一位 
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
