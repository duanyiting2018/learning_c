#include<stdio.h>
int main()
{
	int i,j,m,n,a,b,cur,e[101][101],book[101]={0},que[10001],head,tail;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(i==j)
				e[i][j]=0;
			else
				e[i][j]=100000000;//������ 
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&a,&b);
		e[a][b]=1;
		e[b][a]=1;
	 }
	//���г�ʼ�� 
	head=1;
	tail=1;
	que[tail]=1;
	tail++;
	book[1]=1;
	//���в�Ϊ��ʱѭ�� 
	while(head<tail&&tail<=n)
	{
		cur=que[head];
		for(i=1;i<=n;i++)
		{
			//!!!�жϴӶ���cur������i�Ƿ��б�(i�Ƿ���ʹ�)!!!
			if(e[cur][i]==1&&book[i]==0)
			{
			que[tail]=i;
			tail++;
			book[i]=1;//���i�ѷ���  
		 }
		 if(tail>n)
			break;
	    }
	    head++;
	}
	 for(i=1;i<tail;i++)
	 	printf("%d ",que[i]); 
	system("pause");
	return 0;
}
