#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
    a="*";b=" ";d=4;
	for(c=1;c<=9;c+=2)
    {
    printf("%s%s%s",b*d,a*c,b*d);
    d-=1;
    }
	system("pause");
	return 0;
}
