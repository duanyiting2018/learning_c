#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10],i;
    printf("������10�������������򣩣�");
    for(i=0;i<=10;i++)
    {scanf("%d",&a[i]);}
    for(i=10;i>=0;i--)
    {printf("%d\n",a[i]);}
	system("pause");
	return 0;
}
