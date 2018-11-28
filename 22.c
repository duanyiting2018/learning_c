#include <stdio.h>
#include <stdlib.h>
int main()
{
	 int a,b;
     char str_a[4],last_a[2],str_00[2],compare_00[2];
    
     // 如果初始化字符串00，出现乱码
     str_00[2]='00';
     printf("如果初始化字符串00，出现乱码 %s\n", str_00); 
    
     //将数字0转换为字符0 
     itoa(0, str_00, 10);     
     //两个字符串0拼接为00字符串     
     strcat (str_00,str_00);    
     printf("将数字0转换为字符0，两个字符串0拼接为00字符串 %s\n", str_00); 
     
    
     //将00字符串复制给compare_00字符串
     strcpy (compare_00,str_00);    
     printf("要比较的00字符串 %s\n\n\n", compare_00); 
    
     //输入要判断的年份
     printf("请输入要判断的年份\n"); 
     scanf("%d",&a);
     b=a;
     itoa(a, str_a, 10); 
     printf("将输入的年份先转为字符串  %s\n", str_a); 
     strcpy(last_a, str_a+strlen(str_a) -2);
   
     printf("然后获取输入年份字符串的后2位数字%s,与00字符串进行比较\n\n\n", last_a); 
    
     //两种情况：
     //情况一：如果输入年份的后2位不是00，而且能被4除尽，则是闰年
     //情况二：如果输入年份的后2位是00，而且被400除尽，则是闰年
     if((strcmp(last_a, compare_00) != 0 && b%4==0) ||(strcmp(last_a, compare_00) == 0 && b%400==0) )
       {printf("计算结果为：Yes, 闰年 %d\n\n", b);    
        }
      else
      {printf("计算结果为：No, 不是闰年 %d\n\n",b);} 
    
	 system("pause");
	 return 0;
}
