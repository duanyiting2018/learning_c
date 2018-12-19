#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,i;
    a=0;
    i=1;
    while(i<=100)
    {
    if(i%2==1)
    {
    a+=i;
    printf(" %d ",a);
    }
    i+=1;
    }
	system("pause");
	return 0;
}
