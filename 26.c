#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 3");
	int a,b,c;
    //���Դ�ӡ��ʾ��
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b) //a>=b���������
		if(a>=c) //a��c�Ĺ�ϵ
			printf("%d",a);
        else
			printf("%d",c);
    else //a>=b�����������
		if(b>=c) //b��c�Ĺ�ϵ
			printf("%d",b);
        else
			printf("%d",c);
	system("pause");
	return 0;
}
