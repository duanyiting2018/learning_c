#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
    a=1;
    scanf("%d",&c);
    while(a<=c)
    {
    b=1;
    while(b<=a)
    {printf("%d",a);
     b+=1;}
    printf("\n");
    a+=1;
    }
	system("pause");
	return 0;
}
