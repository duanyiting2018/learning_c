#include<stdio.h>
int fun(int x)
{
	int num=0;
	int f[10]={6,2,5,5,4,5,6,3,7,6};//记录每个数字用几根火柴棍 
	while(x/10!=0)
	{
		num+=f[x%10];
		x=x/10;
	 }
	num+=f[x];
	return num;//输出火柴棍(num)的总根数 
 }
int main()
{
	int a,b,c,m,sum=0;
	scanf("%d",&m);//输入火柴棍的个数  
	//开始枚举a和b
	for(a=0;a<=1111;a++)
		for(b=0;b<=1111;b++)
		{
			c=a+b;
			if(fun(a)+fun(b)+fun(c)==m-4)
			{
				printf("%d+%d=%d\n",a,b,c);
				sum++;
			}
		 }
	printf("可以拼出%d个不同等式\n",sum);
	system("pause");
	return 0;
}
