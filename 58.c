#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,cou,i;
    cou=0;
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
    if(a%i==0)
    {
    cou++;
    printf("Լ����:%d\n",i); //��ӡ��Լ��
    }}
    if(cou==0)
    printf("����/����\n");
    else
    printf("����\n");
	system("pause");
	return 0;
}
