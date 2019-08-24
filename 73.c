#include<stdio.h>
int a[101],n;//全局变量 
void fast_sort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
		return;
	temp=a[left];//temp=基准数 
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=temp&&i<j)
			j--;
		while(a[i]<=temp&&i<j)
			i++;
		if(i<j)//当i和j没相遇时（还没碰头）
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
	}
	//将基准数归位 
	a[left]=a[i];
	a[i]=temp;
	fast_sort(left,i-1);
	fast_sort(i+1,right);
	return;
}
int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	fast_sort(1,n);
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	system("pause");
	return 0;
}
