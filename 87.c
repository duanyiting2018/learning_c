#include<stdio.h>
int a[51][51];
int book[51][51],n,m,flag=0;
//!!!
struct note
{
	int x;
	int y;
}s[100];
int top=0;
//!!!
void dfs(int x,int y,int front)
{
	int i;
	//判断是否到达终点 
	if(x==n&&y==m+1)
	{
		flag=1;
		for(i=1;i<=top;i++)
			printf("(%d,%d)",s[i].x,s[i].y);
		return;
	 }
	//判断是否越界 
	if(x<1||x>n||y<1||y>m)
		return;
	//判断管道是否在路径中已使用 
	if(book[x][y]==1)
		return;
	book[x][y]=1;
	//将坐标入栈 
	top++;
	s[top].x=x;
	s[top].y=y;
	//水管是直管!!!
	if(a[x][y]>=5&&a[x][y]<=6)
	{
		if(front==1)//进水口在左 
			dfs(x,y+1,1);
		if(front==2)//进水口在上 
			dfs(x+1,y,2);
		if(front==3)//进水口在右 
			dfs(x,y-1,3);
		if(front==4)//进水口在下 
			dfs(x-1,y,4);
	}
	//水管是弯管!!!
	if(a[x][y]>=1&&a[x][y]<=4)
	{
		if(front==1)//进水口在左 
		{
			dfs(x+1,y,2);
			dfs(x-1,y,4);
		}
		if(front==2)//进水口在上 
		{
			dfs(x,y+1,1);
			dfs(x,y-1,3);
		}
		if(front==3)//进水口在右 
		{
			dfs(x-1,y,4);
			dfs(x+1,y,2);
		}
		if(front==4)//进水口在下 
		{
			dfs(x,y+1,1);
			dfs(x,y-1,3);
		}
	}
	book[x][y]=0;
	top--;
	return;
}
int main()
{
	int i,j,sum=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d", &a[i][j]);
	//开始搜索 
	dfs(1,1,1);
	if(flag==0)
		printf("impossible!\n");
 	system("pause");
	return 0; 
}
