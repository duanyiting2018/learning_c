#include <stdio.h>
#include <stdlib.h>
int main()
{
	int h,a[10],b,s,c;
    for(b=0;b<=9;b++)
    {printf("������ƻ���ĸ߶ȣ�");
    scanf("%d",&a[b]);}
    scanf("%d",&h);
    scanf("%d",&c);
    s=0;
    for(b=0;b<=9;b++)
    {
    if(a[b]<=h+c)
    s++;
    }
    printf("%d\n",s);
	system("pause");
	return 0;
}
