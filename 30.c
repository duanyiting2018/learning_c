#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
    a=100; //init=100
    while(a>=-900) //条件变为a>=-900
    {
    printf("%d\n",a);
    a-=1; //将a的值减1
    }
	system("pause");
	return 0;
}
