#include<stdio.h>
int book[101],sum,n,e[101][101];
void dfs(int cur)//当前顶点编号 
{
	int i;
	printf("%d ",cur);
	sum++;
	if(sum==n)
		return;
	for(i=1;i<=n;i++)
	{
		//判断当前顶点到i是否有边(i是否访问过)
		if(e[cur][i]==1&&book[i]==0)
		{
			book[i]=1;
			dfs(i);
		 } 
	}
	return;
 }
int main()
{
	int i,j,m,a,b;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(i==j)
				e[i][j]=0;
			else
				e[i][j]=100000000;//正无穷 
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		e[a][b]=1;
		e[b][a]=1;
	 }
	book[1]=1;
	dfs(1);
	system("pause");
	return 0;
}
