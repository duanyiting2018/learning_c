#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
 };
int main()
{
	struct node *head,*p,*q,*t;
	int i,n,a;
	scanf("%d",&n);
	head=NULL;//ͷָ���ʼΪ�� 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;//->!!!	�����ݴ洢����ǰ�ڵ��data���� 
		p->next=NULL;//���õ�ǰ�ڵ�ĺ���ָ��ָ��գ�Ҳ���ǵ�ǰ�ڵ����һ���ڵ�Ϊ�� 
		if(head==NULL)
			head=p;
		else
			q->next=p;
		q=p;
	 }
	 scanf("%d",&a);
	 t=head;//������ͷ����ʼ���� 
	 while(t!=NULL)
	 {
	 	if(t->next==NULL||t->next->data>a)//�����ǰ�ڵ������ڵ����һ�ڵ���ڴ�������ʱִ�� 
		{
			p=(struct node *)malloc(sizeof(struct node));
			p->data=a;
			p->next=t->next;
			t->next=p;//����
			break; 
		 }
		 t=t->next; 
	  }
	  t=head;
	  while(t!=NULL)
	  {
	  	printf("%d ",t->data);
	  	t=t->next;
	  }
	  system("pause");
	  return 0;
}
