#include<stdio.h>
int min=100000000,book[101],n,e[101][101];
//cur�ǵ�ǰ���б�ţ�dis������·�� 
void dfs(int cur,int dis)
{
	int j;
	if(dis>min)
		return;
	if(cur==n)//�ж��Ƿ񵽴�Ŀ����� 
	{
		if(dis<min)
			min=dis;
		return;
	 }
	for(j=1;j<=n;j++)
	//�жϵ�ǰ���е�j�Ƿ���·(j�Ƿ����߹�)
	{
	if(e[cur][j]!=100000000&&book[j]==0)
	{
		book[j]=1;
		dfs(j,dis+e[cur][j]);
		book[j]=0;
	 }
    }
	 return;
 }
int main()
{
	int i,j,m,a,b,c;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(i==j)
				e[i][j]=0;
			else
				e[i][j]=100000000;
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		e[a][b]=c;
	}
	book[1]=1;
	dfs(1,0);
	printf("%d",min);
	system("pause");
	return 0;
}
