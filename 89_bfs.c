#include<stdio.h>
struct note
{
	int x;//���б�� 
	int s;//ת������  
};
int main()
{
	struct note que[2501];
	int e[51][51]={0},book[51]={0},head,tail,i,j,n,m,a,b,cur,start,end,flag=0;
	scanf("%d %d %d %d",&n,&m,&start,&end);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(i==j)
				e[i][j]=0;
			else
				e[i][j]=100000000;
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		//!����ͼ! 
		e[a][b]=1;
		e[b][a]=1;
	}
	head=1;
	tail=1;
	//��start���м������ 
	que[tail].x=start;
	que[tail].s=0;
	tail++;
	book[start]=1;
	while(head<tail)
	{
		cur=que[head].x;
		for(j=1;j<=n;j++)//��1~n���γ��� 
		{
			//��cur��j�Ƿ���·��(j�Ƿ��ڶ�����)
			if(e[cur][j]!=100000000&&book[j]==0)
			{
				que[tail].x=j;
				que[tail].s=que[head].s+1;//ת������+1
				tail++;
				book[j]=1;
			 }
			if(que[tail-1].x==end)
			{
				flag=1;
				break;
			}
		 }
		 if(flag==1)
		 	break;
		head++;//һ������չ������,head++���ܼ�����չ  
	}
	printf("%d",que[tail-1].s);
	system("pause");
	return 0;
}
