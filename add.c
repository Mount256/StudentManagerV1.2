#include"mainhead.h"

FILE *fin1,* fin2;
struct STU *tail,*p,*head;

void Add(char file_users[],char file_data[])
{
	char num[20],name[20],grade[5];
	int a;
	fin1=fopen(file_users,"a");
	fin2=fopen(file_data,"a");
	do
	{
	 printf("���ѧ���˻�\n");
	 printf("������ѧ��������");
	 scanf("%s",name);
	 if(FindStu_Check("stu_data.txt",name)==1)
	 {
	 printf("���и�ѧ����\n");
	 system("pause");
	 system("cls");
	 fclose(fin1);
	 fclose(fin2);
     }
	 else
	 {
	 printf("������ѧ��ѧ�ţ�");
	 scanf("%s",num);
	 printf("������ѧ���ɼ���");
	 scanf("%s",grade);
	 fprintf(fin1,"%s 123456\n",name);
	 fprintf(fin2,"%s %s %s\n",num,name,grade);
	 Enter(num,name,grade);
	 printf("��ӳɹ���\n");
	 printf("�Ƿ������ӣ����밴1�������밴��������\n");
	 scanf("%d",&a);
	 system("cls");
     }
    }while(a==1);
    fclose(fin1);
    fclose(fin2);
}

struct STU* AddFront(char file_users[],char file_data[],struct STU *pos)
{
	char num[20],name[20],grade[5];
	struct STU *newstu;
	fin1=fopen(file_users,"a");
	printf("���ѧ���˻�\n");
	printf("������ѧ��������");
	scanf("%s",name);
	if(FindStu_Check("stu_data.txt",name)==1)
	{
	 printf("���и�ѧ����\n");
	 fclose(fin1);
	 system("pause");
	 system("cls");
	 return pos;
    }
	else
	{
	printf("������ѧ��ѧ�ţ�");
	scanf("%s",num);
	printf("������ѧ���ɼ���");
	scanf("%s",grade);
	fprintf(fin1,"%s 123456\n",name);
	fclose(fin1);
	newstu=(struct STU *)malloc(sizeof(struct STU));
	strcpy(newstu->num,num);
	strcpy(newstu->name,name);
	strcpy(newstu->grade,grade);
	newstu->next=pos;
    if(pos!=head){ newstu->back=pos->back; pos->back->next=newstu; pos->back=newstu; }
      else { newstu->back=NULL; pos->back=newstu; head=newstu; }
    RebuildStuFile_1(file_data);
    printf("��ӳɹ���");
    system("pause");
    system("cls");
    return newstu;
    }
}
//59
