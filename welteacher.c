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
	printf("老师 %s 欢迎您！\n",name);
	printf("=================================\n");
	printf(" |      1.添加学生账户         |    \n");
	printf(" |2.查看/查找/编辑/删除学生信息|     \n");
	printf(" |    3.导出所有学生信息       |     \n");
	printf(" |       4.修改密码            |     \n");
	printf(" |   5.注销（删除）本账户      |     \n"); 
	printf(" |        6.使用说明           |     \n"); 
	printf(" |         7.退出              |     \n"); 
	printf("=================================\n");
	printf("请输入要操作的序号：");
	scanf("%d",&a);
	system("cls");
	if(a==1)Add("users_st.txt","stu_data.txt");
	if(a==2)
	  if(bol!=0)Browse(head);
	  else {
	  	printf("还没有学生用户，去添加学生吧！");
	  	system("pause");
	  	system("cls");
	  }
	if(a==3)
	  if(bol!=0)Print("学生信息.txt");
	  else {
	  	printf("还没有学生用户，去添加学生吧！");
	  	system("pause");
	  	system("cls");
	  }
	if(a==4)
	{
		printf("请输入修改后的密码：");
		pwa(s1);printf("\n");
		printf("请再输入一次密码：");
		pwa(s2);printf("\n");
		if(strcmp(s1,s2)!=0)printf("两次输入密码不一致！修改失败！\n");
		 else 
		 {
		 RebuildStuFile_4(name,s2,"users_ad.txt"); 
		// printf("修改成功！");
		 }
		 system("pause");
		 system("cls");
	}
	if(a==5){
	  printf("确定要注销吗？您的账户将永远消失（注意，是真的很久哦）\n");
	  printf("您注销后学生的所有数据不会丢失\n");
	  printf("如果确定，请输入1，否则请按其他数字\n");
	  scanf("%d",&a);
	  if(a==1){ RebuildStuFile_2(name,"users_ad.txt"); a=6;}
	  system("cls");
      }
    if(a==6)instrction();
	}while(a!=7);
}

