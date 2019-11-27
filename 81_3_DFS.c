#include<stdio.h>
char a[20][21];
int book[20][20],max,mx,my,n,m;
int getnum(int i,int j)
{
	int sum,x,y;
	sum=0;
	//上统计 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		x--;
	} 
	//下统计 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		x++;
	} 
	//左统计 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		y--;
	} 
	//右统计 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		y++;
	}
	return sum;
}
void dfs(int x,int y)
{
	int next[4][2]={{0,1}//往右走 
	,{1,0}//往下走 
	,{0,-1}//往左走 
	,{-1,0}};//往上走 
	int sum,k,tx,ty;
	sum=getnum(x,y);
	if(sum>max)
	{
		 max=sum;
		 mx=x;
		 my=y;
    }
    for(k=0;k<=3;k++)
	{
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<0||tx>n-1||ty<0||ty>m-1)
			continue;
		if(a[tx][ty]=='.'&&book[tx][ty]==0)
		{
			//标记此点已走过 
			book[tx][ty]=1;
			dfs(tx,ty);//开始尝试下一个点  
		}
	}
	return ;
}
int main()
{
	int i,startx,starty;
	//读入行列数 
	scanf("%d %d %d %d",&n,&m,&startx,&starty); 
	for(i=0;i<=n-1;i++)
		scanf("%s",a[i]);
	book[startx][starty]=1;
	max=getnum(startx,starty);\
	mx=startx;
	my=starty;
	dfs(startx,starty);
	printf("炸弹放在(%d,%d),可以消灭%d个敌人。\n",mx,my,max);
	system("pause");
	return 0;
} 
