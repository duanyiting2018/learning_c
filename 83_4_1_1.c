#include<stdio.h>
int a[10],book[10],n;//book={0,0,0,0,0,0,0,0,0,0}
void dfs(int step)
{
	int i;
	if(step==n+1)
	{
		//输出一种排列 
		for(i=1;i<=n;i++)
			printf("%d",a[i]);
		printf("\n");
		return;//返回前一步  
	 }
	for(i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);//递归 
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
//    判断边界 
//    尝试每一种可能 for(i=1;i<=n;i++)
//	  {
//	      继续下一步 dfs(step+1);
//    }
//    返回 
//} 
