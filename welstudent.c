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
	printf("同学 %s 欢迎您！\n",name);
	printf("================\n");
	printf(" | 1.查询成绩 |\n");
	printf(" | 2.修改密码 |\n");
	printf(" |   3.退出   |\n");
	printf("================\n");
	printf("请输入要操作的序号：");
	scanf("%d",&a);
	system("cls");
	if(a==1)
	{
		printf("学号：%s\n",ME.num);
		printf("姓名：%s\n",ME.name);
		printf("成绩：%s\n",ME.grade);
		double GPA=atof(ME.grade)/10-5.0;
		if(GPA<0)GPA=0;
		printf("绩点：%.1f\n",GPA);
		printf("=================\n");
		system("pause");
		system("cls");
	}
	if(a==2)
	{
	    printf("请输入修改后的密码：");
		pwa(s1);printf("\n");
		printf("请再输入一次密码：");
		pwa(s2);printf("\n");
		if(strcmp(s1,s2)!=0)printf("两次输入密码不一致！修改失败！\n");
		 else 
		 {
		 RebuildStuFile_4(name,s2,"users_st.txt"); 
		// printf("修改成功！");
		 }
		 system("pause");
		 system("cls");
	}
	}while(a!=3); 
    }else {printf("登陆失败！"); system("pause");}
}
