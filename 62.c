#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
int main()
{
	int a,b,s;
    s=5;
    srand((unsigned)time(NULL));
    a=rand()%50;
    while(1)
    {
    s--;
    printf("输入1~50数字：\n");
    scanf("%d",&b);
    if(b>a)
    printf("太大，%d次机会。\n",s);
    if(b<a)
    printf("太小，%d次机会。\n",s);
    if(a==b)
    {
    printf("答对了。\n");
    break;
    }
    if(s==0)
    {
    printf("没有机会了，60秒后关机！\n");
    system("shutdown -s -t 60");
    break;
    }}
    Sleep(30000);
    system("shutdown -a");
    printf("%d\n",a);
	system("pause");
	return 0;
}
