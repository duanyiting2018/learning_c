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
	//Ҫ���µ�����ѭ�� 
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
			swap(t,i);//����t��i��ֵ 
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
	//�����һ����Ҷ�ڵ㵽��һ�������������µ��� 
	for(i=n/2;i>=1;i--)
		down(i);
	return; 
}
//ɾ������Ԫ��  
int del()
{
	int t;
	t=h[1];
	h[1]=h[n];//���ѵ׸�ֵ���Ѷ� 
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
	//ɾ������Ԫ�� 
	for(i=1;i<=num;i++)
		printf("%d ",h[i]);
	system("pause");
	return 0;
}
