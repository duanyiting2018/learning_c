#include<stdio.h>
int main()
{
	int a[100],i,j,t,n;
	scanf("%d",&n);//接下来有n个数 
	for(i=1;i<=n;i++)//循环读入n个数到a中  
		scanf("%d",&a[i]);
	//Bubble Sort core
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j]<a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
	}
	//
	for(i=1;i<=n;i++)
		printf("%d ",&a[i]);
	system("pause");
	return 0;
}
