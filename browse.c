#include"mainhead.h"

FILE *fout1,*fout2;
void Browse(struct STU *pos)
{
	struct STU *ans;
	int a;
	char need[50];
	do
	{ 
	//printf("%p\n",pos);
	printf("------------ѧ����Ϣ-------------\n");
	printf("ѧ�ţ�%s\n",pos->num);
	printf("������%s\n",pos->name);
	printf("�ɼ���%s\n",pos->grade);
	double GPA=atof(pos->grade)/10-5.0;
	if(GPA<=0.0)GPA=0;
	printf("���㣺%.1f\n",GPA);
	printf("------------��    ��-------------\n");
	printf("1.��һ��\n");
	printf("2.��һ��\n");
	printf("3.����/��תģʽ\n");
	printf("4.�ڸ�ѧ��ǰ�����һ��ѧ��\n");
	printf("5.�޸�ѧ�Ż�ɼ����޷��޸���������Ҫ�޸���������Ҫ�������ѧ���˻���\n");
	printf("6.ɾ����ѧ����Ϣ����������ͬʱɾ��ѧ���˻�����\n");
	printf("7.���ø������루��ʼ���룺123456��\n");
	printf("8.�������˵�\n");
	printf("-----------------------------\n");
	printf("������Ҫ��������ţ�");
	scanf("%d",&a);
	printf("\n");
	switch(a)
     	{
		  case 1:if(pos->back==NULL){printf("���ǵ�һ����");system("pause");}
		           else pos=pos->back;
		         system("cls");  
		         break;
	      case 2:if(pos->next==NULL){printf("�������һ����");system("pause");}
		           else pos=pos->next;
		         system("cls");  
		         break;
		  case 3:system("cls");
	             printf("������ҹؼ��֣�ѧ�š��������ɼ��Կɣ�:");
	             scanf("%s",need);
	             system("cls");
	             ans=Find(pos,need);
	             if(ans==NULL){printf("û�ҵ���");system("pause");}
	               else pos=ans;
	             system("cls");
	             break;
	      case 4:system("cls");pos=AddFront("users_st.txt","stu_data.txt",pos);break;              
		  case 5:system("cls");pos=Revise("stu_data.txt",pos);break;
		  case 6:printf("��ȷ�����Ҫɾ����ѧ����Ϣ�𣨰���ѧ���˻�����ȷ���밴1�������밴��������\n");
		         scanf("%d",&a);
		         if(a==1)pos=Delete("stu_data.txt","users_st.txt",pos);
		         if(pos==NULL)a=8;
		         system("cls");
		         break;
		  case 7:printf("��ȷ�����Ҫ���ø�ѧ��������ȷ���밴1�������밴��������\n");
		         scanf("%d",&a);
		         if(a==1)RebuildStuFile_3(pos->name,"users_st.txt");
		         system("cls");
		         break;
        }
    }while(a!=8);
    system("cls");
}
