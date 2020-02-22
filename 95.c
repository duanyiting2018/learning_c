#include<stdio.h>
struct edge
{
	int u;
	int v;
	int w;
};
struct edge e[10];
int n,m;
int f[7]={0},sum=0,count=0;
//f数组大小n+1 
void quicksort(int left,int right)
{
	int i,j;
	struct edge t;
	if(left>right)
		return;
	i=left;
	j=right;
	while(i!=j)
	{
		//要从右边开始找  
		while(e[j].w>=e[left].w && i<j)
			j--;
		//再从左边找 
		while(e[i].w<=e[left].w && i<j)
			i++;
		if(i<j)
		{
			t=e[i];
			e[i]=e[j];
			e[j]=t;
		 }
	}
	//基准数归位 
	t=e[left];
	e[left]=e[i];
	e[i]=t;
	quicksort(left,i-1);
	quicksort(i+1,right);
	return; 
}
//搜索并查集 
int getf(int v)
{
	if(f[v]==v)
		return v;
	else
	{
		f[v]=getf(f[v]);
		return f[v];
	}
}
int merge(int v,int u)
{
	int t1,t2;
	t1=getf(v);
	t2=getf(u);
	if(t1!=t2)
	{
		f[t2]=t1;
		return 1;
	}
	return 0;
}
int main()
{
	int i;
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
		scanf("%d %d %d",&e[i].u,&e[i].v,&e[i].w);
	quicksort(1,m);
	for(i=1;i<=n;i++)
		f[i]=i;
	//!!!Kruskal算法核心!!!
	for(i=1;i<=m;i++)
	{
		if(merge(e[i].u,e[i].v))
		{
			count++;
			sum=sum+e[i].w;
		}
		if(count==n-1)
			break;
	 }
	printf("%d",sum);
	system("pause");
	return 0;
}
