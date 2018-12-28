#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{
	int a,b,c;
    a=0;
    scanf("%d",&c);
    while(a<=c)
    {
    system("cls");
    b=1;
    while(b<=a)
    {
    printf("*");
    b+=1;
    }
    printf("H\n");
    Sleep(0.0000001);
    a+=1;
    }
	system("pause");
	return 0;
}
