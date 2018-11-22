#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    float c,d;
    a=130;b=5;
    c=a%(b*b);d=a/b%b;
    printf("%d/(%d*%d)=%f\n",a,b,b,c);
    printf("%d/%d/%d=%f",a,b,b,d);
	system("pause");
	return 0;
}
