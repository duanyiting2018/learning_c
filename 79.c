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
	head=NULL;//头指针初始为空 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;//->!!!	将数据存储到当前节点的data域中 
		p->next=NULL;//设置当前节点的后续指针指向空，也就是当前节点的下一个节点为空 
		if(head==NULL)
			head=p;
		else
			q->next=p;
		q=p;
	 }
	 scanf("%d",&a);
	 t=head;//从链表头部开始遍历 
	 while(t!=NULL)
	 {
	 	if(t->next==NULL||t->next->data>a)//如果当前节点是最后节点或下一节点大于代插入数时执行 
		{
			p=(struct node *)malloc(sizeof(struct node));
			p->data=a;
			p->next=t->next;
			t->next=p;//插入
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
