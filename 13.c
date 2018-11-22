#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,exchange;
    scanf("%d%d",&a,&b);
    exchange=a;a=b;b=exchange;
    printf("%d %d",a,b);
	system("pause");
	return 0;
}
