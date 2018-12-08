#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 3");
	int a,b,c;
    //可以打印提示语
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b) //a>=b成立的情况
		if(a>=c) //a与c的关系
			printf("%d",a);
        else
			printf("%d",c);
    else //a>=b不成立的情况
		if(b>=c) //b与c的关系
			printf("%d",b);
        else
			printf("%d",c);
	system("pause");
	return 0;
}
