#include<stdio.h>
char a[20][21];
int book[20][20],max,mx,my,n,m;
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
void dfs(int x,int y)
{
	int next[4][2]={{0,1}//������ 
	,{1,0}//������ 
	,{0,-1}//������ 
	,{-1,0}};//������ 
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
			//��Ǵ˵����߹� 
			book[tx][ty]=1;
			dfs(tx,ty);//��ʼ������һ����  
		}
	}
	return ;
}
int main()
{
	int i,startx,starty;
	//���������� 
	scanf("%d %d %d %d",&n,&m,&startx,&starty); 
	for(i=0;i<=n-1;i++)
		scanf("%s",a[i]);
	book[startx][starty]=1;
	max=getnum(startx,starty);\
	mx=startx;
	my=starty;
	dfs(startx,starty);
	printf("ը������(%d,%d),��������%d�����ˡ�\n",mx,my,max);
	system("pause");
	return 0;
} 
