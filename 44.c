#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    a=1;
    while(a<=5)
    {
    b=1;
    while(b<=a)
    {printf("*");
     b+=1;}
    printf("\n");
    a+=1;
    }
	system("pause");
	return 0;
}
