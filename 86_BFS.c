#include<stdio.h>
struct note
{
	int x;
	int y;//��������  
 };
int main()
{
	struct note que[2501];
	int head,tail,a[51][51],book[51][51]={0};
	int i,j,k,sum,n,m,startx,starty,tx,ty;
	//����һ���������� 
	int next[4][2]={{0,1},
	{1,0},
	{0,-1},
	{-1,0}};
	scanf("%d %d %d %d",&n,&m,&startx,&starty);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	head=1;
	tail=1;
	//���뽵����ʼ���� 
	que[tail].x=startx;
	que[tail].y=starty;
	tail++;
	book[startx][starty]=1;
	sum=1;
	while(head<tail)
	{
		for(k=0;k<=3;k++)
		{
			//������һ��������  
			tx=que[head].x+next[k][0];
			ty=que[head].y+next[k][1];
			if(tx<1||tx>n||ty<1||ty>m)
				//printf("%d %d\n",&tx,&ty);
				continue;
			//�ж�½�ػ��߹� 
			if(a[tx][ty]>0&&book[tx][ty]==0)
			{
				sum++;
				//printf("%d %d %d",sum,tx,ty);
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				tail++;
			}
		}
		head++;//!!!
	 }
	 printf("%d\n",sum);
	 system("pause");
	 return 0;
}
