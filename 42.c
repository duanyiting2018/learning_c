#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{
	int a=1,b=59;
    printf("2:00");
    while(a>=0&&b>=0)
    {
    Sleep(1000);
    system("cls");
    printf("%d:%d",a,b);
    b-=1;
    }
    
    b=59;
    while(b>=0)
    {
    Sleep(1000);
    system("cls");
    printf("0:%d",b);
    b-=1;
    }
	system("pause");
	return 0;
}
