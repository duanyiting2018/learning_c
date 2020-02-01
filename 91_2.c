#include<stdio.h>
int main()
{
	int n,m,i,k;
	int u[6],v[6],w[6];
	int first[5],next[6];
	scanf("%d %d",&n,&m);
	//4 5
	//1 4 9
	//4 3 8
	//1 2 5
	//2 4 6
	//1 3 7
	for(i=1;i<=n;i++)
		first[i]=-1;
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&u[i],&v[i],&w[i]);
		next[i]=first[u[i]];
		first[u[i]]=i;
	}
	for(i=1;i<=n;i++)
	{
		k=first[i];
		while(k!=-1)
		{
			printf("--------------------\n");
			printf("%d %d %d\n",u[k],v[k],w[k]);
			k=next[k];
		}
	}
	return 0;
}
