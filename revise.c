#include"mainhead.h"

FILE *fin;
struct STU *Revise(char FileName[],struct STU *pos)
{
	int a;
	char s[20];
	fin=fopen(FileName,"a");
	printf("���޸�ѧ�Ż�ɼ���\n");
	printf("ѧ�ţ�%s\n",pos->num);
	printf("������%s\n",pos->name);
	printf("�ɼ���%s\n",pos->grade);
	double GPA=atof(pos->grade)/10-5.0;
	if(GPA<=0.0)GPA=0;
	printf("���㣺%.1f\n",GPA);
	printf("-----------------------------\n");
	printf("1.�޸ĸ���ѧ��\n");
	printf("2.�޸ĸ����ɼ�\n");
	printf("3.�˳�\n");
	printf("-----------------------------\n");
	printf("������Ҫ��������ţ�"); 
	scanf("%d",&a);
	printf("\n");
	switch(a)
	{
		case 1:printf("�����޸ĵ�ѧ�ţ�");
		       scanf("%s",s);
		       pos->num[0]='\0';
		       strcpy(pos->num,s);
		       RebuildStuFile_1(FileName);
		       break;
		case 2:printf("�����޸ĵĳɼ���");
		       scanf("%s",s);
		       pos->grade[0]='\0';
		       strcpy(pos->grade,s); 
		       RebuildStuFile_1(FileName);
		       break;
	    case 3:system("cls");
	        	return pos;      
	}
	printf("\n�޸ĳɹ���");
	system("pause");
	system("cls");
	return pos;
}
//44
