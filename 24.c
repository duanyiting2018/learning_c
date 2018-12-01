#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
    printf("请连续输入3个数字:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){d=a;a=b;b=d;}
    if(a<c){b=a;a=c;c=d;}
    if(b<c){d=b;b=c;c=d;}
    printf("%d %d %d\n",a,b,c);
	system("pause");
	return 0;
}
