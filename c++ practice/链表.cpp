#include <stdio.h>
#include <stdlib.h>
using namespace std;
//part 1. The definition of struct which includes int data and struct node*next
struct node{
	int data;
	struct node *next;
}; 
int main(){
//���������Ļ���Ԫ�أ�����ͷָ�룬һ����ǰ���ָ�룬һ��ǰ���ָ�룬һ��������ָ�� 
	struct node *head, *p, *q, *t;
	int i,n,a;
	scanf("%d",&n); //����������� 
	head=NULL;   //ͷָ���ʼΪ�� 
	for(i=1; i<=n;i++){
		sacnf("%d",&a);
		p=(struct node*)malloc(sizeof(struct node));
		p->data=a;   //�����ݴ洢��ǰ�ڵ��data���� 
		p->next=NULL; //���õ�ǰ����к��ָ��Ϊ��
		 
		if(head==NULL) 
		    head=p;  //������ǵ�һ����㣬��ͷָ��ָ����һ��� 
		else
		    q->next=p;  //����ⲻ�ǵ�һ����������һ�����ĺ��ָ��ָ����һ�� 
		
		q=p;        //qָ��Ҳָ��ǰ��� 
	} 
	
	    scanf("%d",&a);  //������Ҫ������� 
	    t=head;          //����ָ������ָ���һ��������ڵĵ�ַ 
	while(t!=NULL){     //�ڵ�������β��ǰ 
		if(t->next==NULL ||t->next->data > a)     //�ڵ��к��ָ��Ϊ�ջ���ָ����ָ�������������ݴ���a (ǰ���Ǹ�������һ����С������������� 
		{
			p=(struct node*)malloc(sizeof(struct node)); //���������ݣ���̬����ռ� 
			p->data=a;      //��������
			p->next=t->next;  //���������ָ��ָ��ǰ�����ָ����ָ��Ľ�� 
			t->next=p;  //��ǰ�ڵ�ĺ��ָ��ָ��������� 
			break;   //����������˳�ѭ�� 
		}
		else
		t=t->next;  //�������������������������һ����� 
	}
	//��������������� 
	t=head;
	while(t!=NULL){
		printf("%d",t->data);  //��ӡ���ý���������� 
		t=t->next;           //ָ����һ����� 
	} 
	
	getchar();getchar();
	return 0;
}
