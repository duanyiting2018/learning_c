#include<stdio.h>//Ͱ���� 
int main()
{
	int a[101],n,i,t,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	//��ʼð������ 
	for(i=1;i<=n-1;i++)//�ж�1~1000��1000��Ͱ 
	{
		for(j=1;j<=n-i;j++)
		{
		if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	    }
	}
	printf("%d ",a[1]);//�����һ���� 
	for(i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1])//����������һ�γ��־���� 
			printf("%d ",a[i]);
	}
	system("pause");
	return 0;
 } 
