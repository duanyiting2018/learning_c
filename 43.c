#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    a=1;
    while(a<=3) //用来控制换行(循环)
    {
    b=1;
    while(b<=5) //用来控制输出每行5个*(循环)
    {printf("*");
     b+=1;}
    printf("\n");
    a+=1;
    }
	system("pause");
	return 0;
}
