#include <stdio.h>
#include <stdlib.h>
int main()
{
	 int a,b;
     char str_a[4],last_a[2],str_00[2],compare_00[2];
    
     // �����ʼ���ַ���00����������
     str_00[2]='00';
     printf("�����ʼ���ַ���00���������� %s\n", str_00); 
    
     //������0ת��Ϊ�ַ�0 
     itoa(0, str_00, 10);     
     //�����ַ���0ƴ��Ϊ00�ַ���     
     strcat (str_00,str_00);    
     printf("������0ת��Ϊ�ַ�0�������ַ���0ƴ��Ϊ00�ַ��� %s\n", str_00); 
     
    
     //��00�ַ������Ƹ�compare_00�ַ���
     strcpy (compare_00,str_00);    
     printf("Ҫ�Ƚϵ�00�ַ��� %s\n\n\n", compare_00); 
    
     //����Ҫ�жϵ����
     printf("������Ҫ�жϵ����\n"); 
     scanf("%d",&a);
     b=a;
     itoa(a, str_a, 10); 
     printf("������������תΪ�ַ���  %s\n", str_a); 
     strcpy(last_a, str_a+strlen(str_a) -2);
   
     printf("Ȼ���ȡ��������ַ����ĺ�2λ����%s,��00�ַ������бȽ�\n\n\n", last_a); 
    
     //���������
     //���һ�����������ݵĺ�2λ����00�������ܱ�4��������������
     //����������������ݵĺ�2λ��00�����ұ�400��������������
     if((strcmp(last_a, compare_00) != 0 && b%4==0) ||(strcmp(last_a, compare_00) == 0 && b%400==0) )
       {printf("������Ϊ��Yes, ���� %d\n\n", b);    
        }
      else
      {printf("������Ϊ��No, �������� %d\n\n",b);} 
    
	 system("pause");
	 return 0;
}
