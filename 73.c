#include<stdio.h>
int a[101],n;//ȫ�ֱ��� 
void fast_sort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
		return;
	temp=a[left];//temp=��׼�� 
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=temp&&i<j)
			j--;
		while(a[i]<=temp&&i<j)
			i++;
		if(i<j)//��i��jû����ʱ����û��ͷ��
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
	}
	//����׼����λ 
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
