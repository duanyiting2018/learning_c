#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
int main()
{
	int a,b,s;
    s=5;
    srand((unsigned)time(NULL));
    a=rand()%50;
    while(1)
    {
    s--;
    printf("����1~50���֣�\n");
    scanf("%d",&b);
    if(b>a)
    printf("̫��%d�λ��ᡣ\n",s);
    if(b<a)
    printf("̫С��%d�λ��ᡣ\n",s);
    if(a==b)
    {
    printf("����ˡ�\n");
    break;
    }
    if(s==0)
    {
    printf("û�л����ˣ�60���ػ���\n");
    system("shutdown -s -t 60");
    break;
    }}
    Sleep(30000);
    system("shutdown -a");
    printf("%d\n",a);
	system("pause");
	return 0;
}
