#include<stdio.h>
int f[1001]={0},n,m,sum=0;
void __init__()
{
	int i;
	for(i=1;i<=n;i++)
		f[i]=i;
	return;
}
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
void merge(int v,int u)
{
	int t1,t2;
	t1=getf(v);
	t2=getf(u);
	if(t1!=t2)
		f[t2]=t1;
	return;
}
//���main������ʼ�Ķ�����Ŷ~
int main()
{
	int i,x,y;
	scanf("%d %d",&n,&m);
	__init__();
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&x,&y);
		merge(x,y);
	 }
	for(i=1;i<=n;i++)
	{
		if(f[i]==i)
			sum++;
	}
	printf("----------\n");
	printf("%d\n",sum);
	system("pause");
	return 0;
}
