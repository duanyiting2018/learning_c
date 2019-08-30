#include<stdio.h>//桶排序 
int main()
{
	int a[101],n,i,t,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	//开始冒泡排序 
	for(i=1;i<=n-1;i++)//判断1~1000这1000个桶 
	{
		for(j=1;j<=n-i;j++)
		{
		if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	    }
	}
	printf("%d ",a[1]);//输出第一个数 
	for(i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1])//如果这个数第一次出现就输出 
			printf("%d ",a[i]);
	}
	system("pause");
	return 0;
 } 
