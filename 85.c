#include<stdio.h>
struct note
{
	int x,y;
	int f,s;//f:�����ڶ����еı��  s:����  
};
int main()
{
	struct note que[2501];//50*50
	int a[51][51]={0},book[51][51]={0};
	int next[4][2]={{0,1}//������  
	,{1,0}//������ 
	,{0,-1}//������ 
	,{-1,0}};//������
	int head,tail;
	int i,j,startx,starty,k,n,m,p,q,tx,ty,flag;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d %d %d",&startx,&starty,&p,&q);
	//���г�ʼ�� 
	head=1;
	tail=1;
	//�����Թ�������� 
	que[tail].x=startx;
	que[tail].y=starty;
	que[tail].f=0;
	que[tail].s=0;
	tail++;
	book[startx][starty]=1;
	flag=0;//����Ƿ񵽴��յ�(0/1)
	while(head<tail)
	{
		for(k=0;k<=3;k++)
		{
			tx=que[head].x+next[k][0];
			ty=que[head].y+next[k][1];
			if(tx<1||tx>n||ty<1||ty>m)
			{
				//printf("��Խ�硣");
				continue; 
			}
			if(a[tx][ty]==0&&book[tx][ty]==0)
			{
				//���������Ϊ���߹� 
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				que[tail].f=head;
				que[tail].s=que[head].s+1;//�����Ǹ��׵Ĳ���+1
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
	 //��ӡ���� 
	 printf("%d",que[tail-1].s);
	 system("pause");
	 return 0;
 } 
