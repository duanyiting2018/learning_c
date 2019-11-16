#include<stdio.h>
struct note
{
	int x,y;
	int f,s;//f:父亲在队列中的编号  s:步数  
};
int main()
{
	struct note que[2501];//50*50
	int a[51][51]={0},book[51][51]={0};
	int next[4][2]={{0,1}//向右走  
	,{1,0}//向下走 
	,{0,-1}//向左走 
	,{-1,0}};//向上走
	int head,tail;
	int i,j,startx,starty,k,n,m,p,q,tx,ty,flag;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d %d %d",&startx,&starty,&p,&q);
	//队列初始化 
	head=1;
	tail=1;
	//输入迷宫入口坐标 
	que[tail].x=startx;
	que[tail].y=starty;
	que[tail].f=0;
	que[tail].s=0;
	tail++;
	book[startx][starty]=1;
	flag=0;//标记是否到达终点(0/1)
	while(head<tail)
	{
		for(k=0;k<=3;k++)
		{
			tx=que[head].x+next[k][0];
			ty=que[head].y+next[k][1];
			if(tx<1||tx>n||ty<1||ty>m)
			{
				//printf("已越界。");
				continue; 
			}
			if(a[tx][ty]==0&&book[tx][ty]==0)
			{
				//把这个点标记为已走过 
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				que[tail].f=head;
				que[tail].s=que[head].s+1;//步数是父亲的步数+1
				tail++; 
			}
			if(tx==p&&ty==q)
			{
				flag=1;//!!!
				break;//!!!
			}
		}
		if(flag==1)
			break;
		head++; 
	 }
	 //打印步数 
	 printf("%d",que[tail-1].s);
	 system("pause");
	 return 0;
 } 
