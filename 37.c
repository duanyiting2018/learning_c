#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,i;
    a=0; //��һ��Ϊʲôinit a=0?
    i=1;
    while(i<=100)
    {
    a+=i;
    i+=1;
    printf(" %d ",a);
    }
	system("pause");
	return 0;
}
