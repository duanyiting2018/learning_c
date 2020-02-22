#include<stdio.h>
int main()
{
	int n,m,i,j,k,min,t1,t2,t3,e[7][7],dis[7],book[7]={0},inf=100000000,count=0,sum=0;
	//count记录顶点,sum记录边的条数  
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(i==j)
				e[i][j]=0;
			else
				e[i][j]=inf;
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&t1,&t2,&t3);
		//注意这是无向图,所以要把边再反转存储一下 
		e[t1][t2]=t3;
		e[t2][t1]=t3; 
	}
	for(i=1;i<=n;i++)
		dis[i]=e[1][i];
	//!!!Prim核心!!!
	book[1]=1;
	count++;
	while(count<n)
	{
		min=inf;
		for(i=1;i<=n;i++)
		{
			if(book[i]==0&&dis[i]<min)
			{
				min=dis[i];
				j=i;
			}
		}
		book[j]=1;
		count++;
		sum=sum+dis[j];
		//扫描j的所有边,以j为中心点更新树到其他的顶点的距离 
		for(k=1;k<=n;k++)
		{
			if(book[k]==0&&dis[k]>e[i][j])
				dis[k]=e[j][k];
		}
	}
	printf("%d",sum);
	system("pause");
	return 0;
}
