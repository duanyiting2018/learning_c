#include<stdio.h>
int a[51][51],book[51][51];
int sum,n,m;
void dfs(int x,int y)
{
	int next[4][2]={{0,1},
	{1,0},
	{0,-1},
	{-1,0}};
	int k,tx,ty;
	for(k=0;k<=3;k++)
		{
			//计算下一步的坐标  
			tx=x+next[k][0];
			ty=y+next[k][1];
			if(tx<1||tx>n||ty<1||ty>m)
				//printf("%d %d\n",&tx,&ty);
				continue;
			//判断陆地或走过 
			if(a[tx][ty]>0&&book[tx][ty]==0)
			{
				sum++;
				book[tx][ty]=1;
				dfs(tx,ty);
			}
		}
		return;
}
int main()
{ 
	int i,j,startx,starty;
	scanf("%d %d %d %d",&n,&m,&startx,&starty);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	book[startx][starty]=1;
	sum=1;
	dfs(startx,starty);
	printf("%d\n",sum);
	system("pause");
	return 0;
}
