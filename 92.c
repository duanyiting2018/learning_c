#include<stdio.h>
int main()
{
	int dis[10],bak[10],i,k,n,m,u[10],v[10],w[10],check,flag,inf=100000000;
	scanf("%d %d",&n,&m);
	//读入边 
	for(i=1;i<=m;i++)
		scanf("%d %d %d",&u[i],&v[i],&w[i]);
	for(i=1;i<=n;i++)
		dis[i]=inf;
	dis[1]=0;
	//!!!Bellman-Ford核心!!!
	for(k=1;k<=n-1;k++)
	{
		check=0;
		for(i=1;i<=m;i++)
			if(dis[v[i]]>dis[u[i]]+w[i])
			{
				dis[v[i]]=dis[u[i]]+w[i];
				check=1;
			}
		if(check==0)
			break;
	 }
	//检测负权回路 
	flag=0;
	for(i=1;i<=m;i++)
		if(dis[v[i]]>dis[u[i]]+w[i])
	 		flag=1;
	if(flag==1)
		printf("此图含有负权回路。");
	else
	{
		for(i=1;i<=n;i++)
			printf("%d ",dis[i]);
	}
	system("pause");
	return 0;
}
