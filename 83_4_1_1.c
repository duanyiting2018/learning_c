#include<stdio.h>
int a[10],book[10],n;//book={0,0,0,0,0,0,0,0,0,0}
void dfs(int step)
{
	int i;
	if(step==n+1)
	{
		//���һ������ 
		for(i=1;i<=n;i++)
			printf("%d",a[i]);
		printf("\n");
		return;//����ǰһ��  
	 }
	for(i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);//�ݹ� 
			book[i]=0; 
		 }
	}
	return;
}
int main()
{
	scanf("%d",&n);
	dfs(1);
	system("pause");
	return 0;
}
//DFS core
//void dfs(int step)
//{
//    �жϱ߽� 
//    ����ÿһ�ֿ��� for(i=1;i<=n;i++)
//	  {
//	      ������һ�� dfs(step+1);
//    }
//    ���� 
//} 
