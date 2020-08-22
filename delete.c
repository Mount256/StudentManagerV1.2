#include"mainhead.h"

struct STU *tail,*p,*head;
struct STU *Delete(char FileData[],char FileUser[],struct STU *pos)
{
	struct STU *_pos;
	_pos=(struct STU *)malloc(sizeof(struct STU));
	char a[20];
	strcpy(a,pos->name);
	if(pos==head && pos==tail)
	{
		_pos=NULL;
		free(pos);
		remove(FileData);
		remove(FileUser);
		return _pos;
	} 
	else if(pos==head)
	{
		pos->next->back=NULL;
		head=pos->next;
		free(pos);
		_pos=head;
	} 
	else if(pos==tail)
	{
		pos->back->next=NULL;
		tail=pos->back;
		free(pos);
		_pos=tail;
	}
	else
	{
		_pos=pos->next;
		pos->back->next=pos->next;
		pos->next->back=pos->back;
		free(pos);
	}
	RebuildStuFile_1(FileData);
	RebuildStuFile_2(a,FileUser);
	return _pos;
}
