#include"mainhead.h"

struct STU *tail,*p,*head;
void WelTeacher(char name[]) 
{
	char s1[20],s2[20];
	int a,bol=exist("stu_data.txt");
	head=(struct STU *)malloc(sizeof(struct STU));
 	strcpy(head->name," ");
 	if(bol!=0)Depart("stu_data.txt");
 	system("cls");
	do
	{
	bol=exist("stu_data.txt");
	printf("��ʦ %s ��ӭ����\n",name);
	printf("=================================\n");
	printf(" |      1.���ѧ���˻�         |    \n");
	printf(" |2.�鿴/����/�༭/ɾ��ѧ����Ϣ|     \n");
	printf(" |    3.��������ѧ����Ϣ       |     \n");
	printf(" |       4.�޸�����            |     \n");
	printf(" |   5.ע����ɾ�������˻�      |     \n"); 
	printf(" |        6.ʹ��˵��           |     \n"); 
	printf(" |         7.�˳�              |     \n"); 
	printf("=================================\n");
	printf("������Ҫ��������ţ�");
	scanf("%d",&a);
	system("cls");
	if(a==1)Add("users_st.txt","stu_data.txt");
	if(a==2)
	  if(bol!=0)Browse(head);
	  else {
	  	printf("��û��ѧ���û���ȥ���ѧ���ɣ�");
	  	system("pause");
	  	system("cls");
	  }
	if(a==3)
	  if(bol!=0)Print("ѧ����Ϣ.txt");
	  else {
	  	printf("��û��ѧ���û���ȥ���ѧ���ɣ�");
	  	system("pause");
	  	system("cls");
	  }
	if(a==4)
	{
		printf("�������޸ĺ�����룺");
		pwa(s1);printf("\n");
		printf("��������һ�����룺");
		pwa(s2);printf("\n");
		if(strcmp(s1,s2)!=0)printf("�����������벻һ�£��޸�ʧ�ܣ�\n");
		 else 
		 {
		 RebuildStuFile_4(name,s2,"users_ad.txt"); 
		// printf("�޸ĳɹ���");
		 }
		 system("pause");
		 system("cls");
	}
	if(a==5){
	  printf("ȷ��Ҫע���������˻�����Զ��ʧ��ע�⣬����ĺܾ�Ŷ��\n");
	  printf("��ע����ѧ�����������ݲ��ᶪʧ\n");
	  printf("���ȷ����������1�������밴��������\n");
	  scanf("%d",&a);
	  if(a==1){ RebuildStuFile_2(name,"users_ad.txt"); a=6;}
	  system("cls");
      }
    if(a==6)instrction();
	}while(a!=7);
}

