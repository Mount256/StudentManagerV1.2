#include"mainhead.h"

void WelStudent(char name[])
{
	int a;
	char s1[20],s2[20];
	system("cls");
    if(FindStu("stu_data.txt",name))
    {
	do
	{
	printf("ͬѧ %s ��ӭ����\n",name);
	printf("================\n");
	printf(" | 1.��ѯ�ɼ� |\n");
	printf(" | 2.�޸����� |\n");
	printf(" |   3.�˳�   |\n");
	printf("================\n");
	printf("������Ҫ��������ţ�");
	scanf("%d",&a);
	system("cls");
	if(a==1)
	{
		printf("ѧ�ţ�%s\n",ME.num);
		printf("������%s\n",ME.name);
		printf("�ɼ���%s\n",ME.grade);
		double GPA=atof(ME.grade)/10-5.0;
		if(GPA<0)GPA=0;
		printf("���㣺%.1f\n",GPA);
		printf("=================\n");
		system("pause");
		system("cls");
	}
	if(a==2)
	{
	    printf("�������޸ĺ�����룺");
		pwa(s1);printf("\n");
		printf("��������һ�����룺");
		pwa(s2);printf("\n");
		if(strcmp(s1,s2)!=0)printf("�����������벻һ�£��޸�ʧ�ܣ�\n");
		 else 
		 {
		 RebuildStuFile_4(name,s2,"users_st.txt"); 
		// printf("�޸ĳɹ���");
		 }
		 system("pause");
		 system("cls");
	}
	}while(a!=3); 
    }else {printf("��½ʧ�ܣ�"); system("pause");}
}
