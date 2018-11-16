#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int a,b,c;
    printf("Please writing two numbers(first)£º");
	scanf("%d",&a);
    printf("Please writing two numbers(second):");
    scanf("%d",&b);
    c=a+b;
    printf("%d+%d=%d",a,b,c);
	system("pause");
	return 0;
}
