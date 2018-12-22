#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{
	int a=100;
    system("color 0a");
    while(a>=0)
    {
    system("cls");
    printf("%d",a);
    Sleep(1);
    a-=1;
    }
	system("pause");
	return 0;
}
