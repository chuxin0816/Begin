#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct  all
{
    char number[20];
    char name[10];
    char model[10];
    double price;
    char origin[20];
    int inquantity;
    int outquantity;
   struct  all *next;
}goods;
struct list
{
	goods *head;//头节点// 
	int length;//链表长度// 
};
goods *chushihua(struct list *LINK)//初始化链表的函数// 
{   goods *p1=(goods*)malloc(sizeof(goods));
    goods *p2=(goods*)malloc(sizeof(goods));
    goods *p3=(goods*)malloc(sizeof(goods));
    goods *p4=(goods*)malloc(sizeof(goods));
    goods *p5=(goods*)malloc(sizeof(goods));
    p1->inquantity=10;
    p1->outquantity=0;
    p1->price=3.0;
    strcpy(p1->number,"001");
    strcpy(p1->model,"饮品");
	strcpy(p1->origin,"中国");
	strcpy(p1->name,"雷碧"); 
	p2->inquantity=10;
    p2->outquantity=0;
    p2->price=3.5;
    strcpy(p2->number,"002");
    strcpy(p2->model,"饮品");
	strcpy(p2->origin,"中国");
	strcpy(p2->name,"忘仔牛奶");
	p3->inquantity=10;
    p3->outquantity=0;
    p3->price=5.0;
    strcpy(p3->number,"003");
    strcpy(p3->model,"饮品");
	strcpy(p3->origin,"中国");
	strcpy(p3->name,"雷花"); 
	p4->inquantity=10;
    p4->outquantity=0;
    p4->price=9.9;
    strcpy(p4->number,"004");
    strcpy(p4->model,"美食");
	strcpy(p4->origin,"中国");
	strcpy(p4->name,"老八秘制小汉堡");
	p5->inquantity=10;
    p5->outquantity=0;
    p5->price=100.0;
    strcpy(p5->number,"005");
    strcpy(p5->model,"烟酒");
	strcpy(p5->origin,"中国");
	strcpy(p5->name,"大中华");     
	LINK->head=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=p5;
    p5->next=NULL;
	LINK->length=5;//元素个数//
	return LINK->head; 
}
goods *findnode(struct list *link,int pos)    //寻找节点函数// //pos:位置// 
{
	if(pos>link->length||pos<0)
	{   
	    printf("wrong!");
		return NULL;
	 }
	 else
	 {
	 	goods *p=link->head;
	 	int i=0;
	 	while(i<pos)
	 	{
	 		p=p->next;
	 		i++;
		 }
		 return p;
	 }
}
goods *insertnode(struct list *link,int pos,goods *node)//插入节点函数// 
{
		if(pos>link->length||pos<0)
	{   printf("wrong!");
		return NULL;
	 }
	 else
	 {
	 	if(pos==0)
	 	{
	 		node->next=link->head;
	 		link->head=node;
		  }
		  else
		  {
		  	goods *pr=findnode(link,pos-1);
		  	node->next=pr->next;
		  	pr->next=node;
		  }
		  link->length++;
		  return link;
	 }	 
}
goods *Delete(struct list *link,int pos)//删除节点函数// 
{
	goods *pt=NULL,*prept=NULL;
	prept=findnode(link,pos-1);
	pt=prept->next;
	if(pt!=NULL)
	{
	 prept->next=pt->next;
	 free(pt);
	}
	else
	{
	printf("wrong!");
    return NULL;	
	}
	return link;
}
int sure(struct list *link,int pos)
{   goods *pr=findnode(link,pos);
    
    printf("这是你选择的商品信息");
	printf("1.价格：%lf",pr->price); 
	printf("你真的确定吗?\n");
	int x;
	printf("1.确定\n");
	printf("2.容我再思索思索"); 
	scanf("%d",&x);
	char place[30];
	if(x==1)
	{
		printf("请输入你的地址吧，包送到门口：");
		scanf("%s",&place);
		printf("等我的好消息吧"); 
		
		
	}
}
int main()
{
 printf("=======菜单=======\n");
 printf("1.查询商品\n");
 printf("2.选购商品\n");
 printf("3.修改商品信息\n");
 printf("4.退出本程序\n"); 
 printf("==================\n");
 printf("请选择所需要的服务:");
 struct list link;
 goods *head;
 head=chushihua(&link);

 int x;
 scanf("%d",&x);
if(x==2)
{
	printf("本店有以下商品可供选择\n");
	printf("1.雷碧\n");
	printf("2.忘仔牛奶\n");
	printf("3.雷花\n");
	printf("4.老八秘制小汉堡\n");
	printf("5.大中华\n");
	printf("请选择中意的小商品：");
	int a;
	scanf("%d",&a);
	 if(a==1)
	 {
	 	sure(head,a);
	 }
	 else if(a==2)
	 {
	 	sure(head,a);
	 }
	  else if(a==3)
	 {
	 	sure(head,a);
	 }
	  else if(head,a==4)
	 {
	 	sure(head,a);
	 }
	  else if(head,a==5)
	 {
	 	sure(head,a);
	 }
	 
}
  
 
 
}