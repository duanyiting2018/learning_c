#include<stdio.h>
struct note
{
	int x;
	int y;//��������  
};
char a[20][21];
int getnum(int i,int j)
{
	int sum,x,y;
	sum=0;
	//��ͳ�� 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		x--;
	} 
	//��ͳ�� 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		x++;
	} 
	//��ͳ�� 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		y--;
	} 
	//��ͳ�� 
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
			sum++;
		y++;
	}
	return sum;
}
int main()
{
	struct note que[401];
	int head,tail,book[20][20]={0},i,j,k,sum,max=0,mx,my,n,m,startx,starty,tx,ty;
	int next[4][2]={{0,1}//������ 
	,{1,0}//������ 
	,{0,-1}//������ 
	,{-1,0}};//������ 
	//���������� 
	scanf("%d %d %d %d",&n,&m,&startx,&starty); 
	for(i=0;i<=n-1;i++)
		scanf("%s",a[i]);
	head=1;tail=1;
	que[tail].x=startx;
	que[tail].y=starty;
	tail++;
	book[startx][starty]=1;
	max=getnum(startx,starty);
	mx=startx;my=starty;
	//�����в�Ϊ��ʱѭ�� 
	//BFS����
	while(head<tail)
	{
		for(k=0;k<=3;k++)
		{
			tx=que[head].x+next[k][0];
			ty=que[head].y+next[k][1];
			if(tx<0||tx>n-1||ty<0||ty>m-1)
				continue;
			if(a[tx][ty]=='.'&&book[tx][ty]==0)
			{
				//��Ǵ˵����߹� 
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				tail++;
				sum=getnum(tx,ty);
				//����maxֵ 
				if(sum>max)
				{
					max=sum;
					mx=tx;
					my=ty;
				}
			}
		}
		head++;
	 } 
	printf("ը������(%d,%d),��������%d�����ˡ�\n",mx,my,max);
	system("pause");
	return 0;
}
