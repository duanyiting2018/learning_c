#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
    b=1;c=1;
    while(c<=a)
    {
    b=b*c;
    c+=1;
    printf(" %d ",b);
    }
	system("pause");
	return 0;
}
