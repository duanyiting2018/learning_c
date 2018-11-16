#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int c,d,e;
    float a,b,f;
	a=2;b=7;
    c=a+b;d=b-a;e=a*b;f=b/a;
    printf("%.0f+%.0f=%d\n",a,b,c);
    printf("%.0f-%.0f=%d\n",b,a,d);
    printf("%.0f*%.0f=%d\n",a,b,e);
    printf("%.0f/%.0f=%d......%d\n",b,a,(int)f,(int)b%(int)a);
	system("pause");
	return 0;
}
