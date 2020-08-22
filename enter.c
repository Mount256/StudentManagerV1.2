#include"mainhead.h"

struct STU *p,*head,*tail;
void Enter(char _num[],char _name[],char _grade[])
{
	  if(strcmp(head->name," ")==0)
	  { 
	    strcpy(head->num,_num);
	    strcpy(head->name,_name);
	    strcpy(head->grade,_grade);
	    head->next=NULL;
	    head->back=NULL;
	    p=head;
	    tail=head;
      }else
      {
        tail=(struct STU *)malloc(sizeof(struct STU));
	    strcpy(tail->num,_num);
	    strcpy(tail->name,_name);
	    strcpy(tail->grade,_grade);
	    tail->next=NULL;
	    tail->back=p;
	    p->next=tail;
	    p=tail;
	  }
}
//26
