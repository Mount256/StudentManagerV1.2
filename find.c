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
		printf("������ģʽ���ؼ��֣�%s\n",keywords);
		printf("��һ���ҵ�%d�������\n",_tail->i);
		printf("�����ҽ��%d��\n",_p->i);
		printf("ѧ�ţ�%s\n",_p->ans->num);
	    printf("������%s\n",_p->ans->name);
    	printf("�ɼ���%s\n",_p->ans->grade);
    	double GPA=atof(_p->ans->grade)/10-5.0;
	    if(GPA<=0.0)GPA=0;
    	printf("���㣺%.1f\n",GPA);
    	printf("-----------------------------\n");
    	printf("1.��һ��\n");
    	printf("2.��һ��\n");
     	printf("3.ȷ��\n");
     	printf("4.�˳�����ģʽ\n"); 
     	printf("-----------------------------\n");
     	printf("������Ҫ��������ţ�");
     	scanf("%d",&a);
     	printf("\n");
     	switch(a)
     	{
		  case 1:if(_p->back==NULL){printf("���ǵ�һ����");system("pause");}
		           else _p=_p->back;
		         system("cls");  
		         break;
	      case 2:if(_p->next==NULL){printf("�������һ����");system("pause");}
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
