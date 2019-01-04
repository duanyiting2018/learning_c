#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
    a=0;
    while(a<=100)
    {
    system("cls");
    b=1;
    while(b<=a)
    {
    printf(" ");
    b+=1;
    }
	printf("   Q\n");
    b=1;
    while(b<=a)
    {
    printf(" ");
    b+=1;
    }
    printf(">-<G>-<\n");
    
    b=1;
    while(b<=a)
    {
    printf(" ");
    b+=1;
    }
    printf("  N N\n");
    Sleep(5);
    b+=1;
    a+=1;
    }
	system("pause");
	return 0;
}
