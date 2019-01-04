#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,a;
    i=1;
    a=0;
    while(i<=14)
    {
    j=1;
    while(j<=i)
    {
    a+=1;
    printf("%d %d %d\n",i,j,a);
    j+=1;
    }i+=1;}
    printf("%d",a);
	system("pause");
	return 0;
}
