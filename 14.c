#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d - %d\n",b,a);
    a=b-a;
    printf("b=%d - %d\n",b,a);
    b=b-a;
    printf("a=%d + %d\n",b,a);
    a=b+a;
    printf("%d %d",a,b);
	system("pause");
	return 0;
}
