#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    a=1;
    while(a<=3) //�������ƻ���(ѭ��)
    {
    b=1;
    while(b<=5) //�����������ÿ��5��*(ѭ��)
    {printf("*");
     b+=1;}
    printf("\n");
    a+=1;
    }
	system("pause");
	return 0;
}
