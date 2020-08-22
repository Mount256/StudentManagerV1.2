#include"mainhead.h"

struct STU *tail,*p,*head;

struct STU *Find(struct STU *pos,char keywords[])
{
	struct seek
	{
		int i;
		struct STU *ans;
		struct seek *next;
		struct seek *back;
	};
	struct seek *_head,*_p,*_tail;
	struct STU *_pos;
	int a=1;
	//-----------------------------------
	_pos=head;
	_head=(struct seek *)malloc(sizeof(struct seek));
	_head->ans=NULL;
    if(strcmp(keywords,_pos->num)==0||strcmp(keywords,_pos->name)==0||strcmp(keywords,_pos->grade)==0)
	{
		_head->ans=_pos;
		_head->i=a++; 
		_head->next=NULL;
		_head->back=NULL;
		_p=_head;
		_tail=_head;
	}
	//-----------------------------------
	while(_pos->next != NULL)
	{
		_pos=_pos->next;
		if(strcmp(keywords,_pos->num)==0||strcmp(keywords,_pos->name)==0||strcmp(keywords,_pos->grade)==0)
		{
			if(_head->ans!=NULL)
			{
			 _tail=(struct seek *)malloc(sizeof(struct seek));
		     _tail->ans=_pos;
		     _tail->i=a++;
		     _tail->next=NULL;
		     _tail->back=_p;
		     _p->next=_tail;
		     _p=_tail;
		    }else
			{
		       _head->ans=_pos;
		       _head->i=a++;
		       _head->next=NULL;
		       _head->back=NULL;
		       _p=_head;
		       _tail=_head;
			}
		} 
	}
	//-----------------------------------
	if(_head->ans==NULL)return _head->ans;
	_p=_head;
	while(1)
	{
		printf("【查找模式】关键字：%s\n",keywords);
		printf("【一共找到%d个结果】\n",_tail->i);
		printf("【查找结果%d】\n",_p->i);
		printf("学号：%s\n",_p->ans->num);
	    printf("姓名：%s\n",_p->ans->name);
    	printf("成绩：%s\n",_p->ans->grade);
    	double GPA=atof(_p->ans->grade)/10-5.0;
	    if(GPA<=0.0)GPA=0;
    	printf("绩点：%.1f\n",GPA);
    	printf("-----------------------------\n");
    	printf("1.上一个\n");
    	printf("2.下一个\n");
     	printf("3.确定\n");
     	printf("4.退出查找模式\n"); 
     	printf("-----------------------------\n");
     	printf("请输入要操作的序号：");
     	scanf("%d",&a);
     	printf("\n");
     	switch(a)
     	{
		  case 1:if(_p->back==NULL){printf("这是第一个！");system("pause");}
		           else _p=_p->back;
		         system("cls");  
		         break;
	      case 2:if(_p->next==NULL){printf("这是最后一个！");system("pause");}
		           else _p=_p->next;
		         system("cls");  
		         break;
		  case 3:return _p->ans;
		  case 4:return pos;
	    }
	}
	return pos;    
}
//94
