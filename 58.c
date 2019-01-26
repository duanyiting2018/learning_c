#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,cou,i;
    cou=0;
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
    if(a%i==0)
    {
    cou++;
    printf("约数是:%d\n",i); //打印出约数
    }}
    if(cou==0)
    printf("质数/素数\n");
    else
    printf("和数\n");
	system("pause");
	return 0;
}
