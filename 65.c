#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10],b,t;
    for(b=0;b<=9;b++)
    a[b]=0; //初始小房间都为0
    for(b=1;b<=5;b++)
    {
    printf("输入5个数（不大于9）：");
    scanf("%d",&t); //读入5个数
    a[t]=1; //对应小房间改为1
    }
    for(b=0;b<=9;b++)
    if(a[b]==0)
    printf("%d\n",b); //输出没有出现的数
	system("pause");
	return 0;
}
