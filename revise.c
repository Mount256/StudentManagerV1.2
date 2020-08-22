#include"mainhead.h"

FILE *fin;
struct STU *Revise(char FileName[],struct STU *pos)
{
	int a;
	char s[20];
	fin=fopen(FileName,"a");
	printf("【修改学号或成绩】\n");
	printf("学号：%s\n",pos->num);
	printf("姓名：%s\n",pos->name);
	printf("成绩：%s\n",pos->grade);
	double GPA=atof(pos->grade)/10-5.0;
	if(GPA<=0.0)GPA=0;
	printf("绩点：%.1f\n",GPA);
	printf("-----------------------------\n");
	printf("1.修改该生学号\n");
	printf("2.修改该生成绩\n");
	printf("3.退出\n");
	printf("-----------------------------\n");
	printf("请输入要操作的序号："); 
	scanf("%d",&a);
	printf("\n");
	switch(a)
	{
		case 1:printf("输入修改的学号：");
		       scanf("%s",s);
		       pos->num[0]='\0';
		       strcpy(pos->num,s);
		       RebuildStuFile_1(FileName);
		       break;
		case 2:printf("输入修改的成绩：");
		       scanf("%s",s);
		       pos->grade[0]='\0';
		       strcpy(pos->grade,s); 
		       RebuildStuFile_1(FileName);
		       break;
	    case 3:system("cls");
	        	return pos;      
	}
	printf("\n修改成功！");
	system("pause");
	system("cls");
	return pos;
}
//44
