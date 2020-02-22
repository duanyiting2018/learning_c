#include<stdio.h>
int h[101],n;
void swap(int x,int y)
{
	int t;
	t=h[x];
	h[x]=h[y];
	h[y]=t;
	return;
}
void down(int i)
{
	int t,flag=0;
	//要向下调整就循环 
	while(i*2<=n&&flag==0)
	{
		if(h[i]<h[i*2])
			t=i*2;
		else
			t=i;
		if(i*2+1<=n)
			if(h[t]<h[i*2+1])
				t=i*2+1;
		if(t!=i)
		{
			swap(t,i);//交换t和i的值 
			i=t; 
		}
		else
			flag=1;
	 }
	 return;
}
void creat()
{
	int i;
	//从最后一个非叶节点到第一个顶点依次向下调整 
	for(i=n/2;i>=1;i--)
		down(i);
	return; 
}
//删除最大的元素  
int del()
{
	int t;
	t=h[1];
	h[1]=h[n];//将堆底赋值到堆顶 
	n--;
	down(1);
	return t; 
}
void heapsort()
{
	while(n>1)
	{
		swap(1,n);
		n--;
		down(1);
	}
	return;
 } 
int main()
{
	int i,num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		scanf("%d",&h[i]);
	n=num;
	creat();
	heapsort();
	//删除顶部元素 
	for(i=1;i<=num;i++)
		printf("%d ",h[i]);
	system("pause");
	return 0;
}
