#include <stdio.h>
#include <stdlib.h>
using namespace std;
//part 1. The definition of struct which includes int data and struct node*next
struct node{
	int data;
	struct node *next;
}; 
int main(){
//定义出所需的基本元素，包括头指针，一个当前结点指针，一个前结点指针，一个遍历用指针 
	struct node *head, *p, *q, *t;
	int i,n,a;
	scanf("%d",&n); //所需输入个数 
	head=NULL;   //头指针初始为空 
	for(i=1; i<=n;i++){
		sacnf("%d",&a);
		p=(struct node*)malloc(sizeof(struct node));
		p->data=a;   //将数据存储当前节点的data域中 
		p->next=NULL; //设置当前结点中后继指针为空
		 
		if(head==NULL) 
		    head=p;  //如果这是第一个结点，则头指针指向这一结点 
		else
		    q->next=p;  //如果这不是第一个，则用上一个结点的后继指针指向这一个 
		
		q=p;        //q指针也指向当前结点 
	} 
	
	    scanf("%d",&a);  //输入想要插入的数 
	    t=head;          //遍历指针首先指向第一个结点所在的地址 
	while(t!=NULL){     //在到达链表尾部前 
		if(t->next==NULL ||t->next->data > a)     //节点中后继指针为空或后继指针所指向结点中所存数据大于a (前提是该链表是一个从小到大的有序链） 
		{
			p=(struct node*)malloc(sizeof(struct node)); //插入新数据，动态申请空间 
			p->data=a;      //存入数据
			p->next=t->next;  //新增结点后继指针指向当前结点后继指针所指向的结点 
			t->next=p;  //当前节点的后继指针指向新增结点 
			break;   //插入完毕则退出循环 
		}
		else
		t=t->next;  //若上述条件不成立，则继续下一个结点 
	}
	//输出链表中所有数 
	t=head;
	while(t!=NULL){
		printf("%d",t->data);  //打印出该结点所存数据 
		t=t->next;           //指向下一个结点 
	} 
	
	getchar();getchar();
	return 0;
}
