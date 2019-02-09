#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
    printf("请输入n：");
	scanf("%d",&n);
	int a[n],i,t,j;
    printf("输入%d个数进行从小到大排序模式：",n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
    for(j=i+1;j<=n;j++)
    {
    if(a[i]>a[j])
    {t=a[i];a[i]=a[j];a[j]=t;}}}
    for(i=1;i<=n;i++)
    printf(" %d\n",a[i]);
	system("pause");
	return 0;
}
