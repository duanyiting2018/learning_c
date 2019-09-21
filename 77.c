#include<stdio.h>
struct queue
{
	int data[1000];
	int head;
	int tail;
 };
struct stack
{
	int data[10];
	int top;
};
int main()
{
	struct queue q1,q2;
	struct stack s;
	int book[10];
	int i,t;
	q1.head=1;q1.tail=1;
	q2.head=1;q2.tail=1;
	s.top=0;
	//初始化用来标记的数组 
	for(i=1;i<=9;i++)
		book[i]=0;
	//分成五次看
	//------------------------------------------------------------------------- 
	//小哼手中的6张牌 
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q1.data[q1.tail]);
		q1.tail++;
	 }
	//小哈手中的6张牌 
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q2.data[q2.tail]);
		q2.tail++;
	}
	 while(q1.head<q1.tail&&q2.head<q2.tail)
	 {
	 	t=q1.data[q1.head];//小哼出1张牌 
		//判断小哼当前出的牌是否赢牌 
		if(book[t]==0)
		{
			q1.head++;//小哼当前出了一张牌 
			s.top++;
			s.data[s.top]=t;//入栈 
			book[t]=1;
		 }
		 else
		 {
		 	q1.head++;//小哼当前出了一张牌 
			q1.data[q1.tail]=t;//把打出的牌放到手中的牌的末尾 
            q1.tail++;
            while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;//取消标记  
				q1.data[q1.tail]=s.data[s.top];
				q1.tail++;
				s.top--;
			 }
			book[s.data[s.top]]=0;
			q1.data[q1.tail]=s.data[s.top];
			q1.tail++;
			s.top--; 
		}
		if(q1.head==q1.tail)
			break;
		t=q2.data[q2.head];
		if(book[t]==0)
		{
			q2.head++;
			s.top++;
			s.data[s.top]=t;
			book[t]=1;
		}
		else
		{
			q2.head++;
			q2.data[q2.tail]=t;
			q2.tail++;
		//--------------------------------------------------------------------- 
		while(s.data[s.top]!=t)//把桌上赢的牌放到手中的牌的末尾 
		{
			 book[s.data[s.top]]=0;
			 q2.data[q2.tail]=s.data[s.top];
			 q2.tail++;
			 s.top--;
		}
		book[s.data[s.top]]=0;
		q2.data[q2.tail]=s.data[s.top];
		q2.tail++;
		s.top--;
	    }
	}
	if(q2.head==q2.tail)
	{
		printf("小哼win\n");
		printf("小哼手上的牌有：");
		for(i=q1.head;i<=q1.tail-1;i++)
			printf(" %d",q1.data[i]);
		if(s.top>0)
		{
			printf("\n桌上的牌有：");
			for(i=1;i<=s.top;i++)
				printf(" %d",s.data[i]);
		}
		else
		{
			printf("桌上已经没有牌了");
		}
	}
	//--------------------------------------------------------------------------
	else
	{
		printf("小哈win\n");
		printf("小哈手上的牌有：");
		for(i=q2.head;i<=q2.tail-1;i++)
			printf(" %d",q2.data[i]);
		if(s.top>0)
		{
			printf("\n桌上的牌有：");
			for(i=1;i<=s.top;i++)
				printf(" %d",s.data[i]);
		}
		else
		{
			printf("桌上已经没有牌了");
		}
	}
	system("pause");
	return 0;
}

