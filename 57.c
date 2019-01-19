#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    for (a=1;a<10;a++)
    {
    for(b=1;b<10;b++)
    {
    if(b<=a)
    {c=a*b;printf(" %d*%d=%d ",b,a,c);
    }}
    printf("\n");
    }
	system("pause");
	return 0;
}
