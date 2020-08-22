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
	printf("------------学生信息-------------\n");
	printf("学号：%s\n",pos->num);
	printf("姓名：%s\n",pos->name);
	printf("成绩：%s\n",pos->grade);
	double GPA=atof(pos->grade)/10-5.0;
	if(GPA<=0.0)GPA=0;
	printf("绩点：%.1f\n",GPA);
	printf("------------操    作-------------\n");
	printf("1.上一个\n");
	printf("2.下一个\n");
	printf("3.查找/跳转模式\n");
	printf("4.在该学生前面添加一个学生\n");
	printf("5.修改学号或成绩（无法修改姓名，若要修改姓名则需要重新添加学生账户）\n");
	printf("6.删除该学生信息（本操作将同时删除学生账户！）\n");
	printf("7.重置该生密码（初始密码：123456）\n");
	printf("8.返回至菜单\n");
	printf("-----------------------------\n");
	printf("请输入要操作的序号：");
	scanf("%d",&a);
	printf("\n");
	switch(a)
     	{
		  case 1:if(pos->back==NULL){printf("这是第一个！");system("pause");}
		           else pos=pos->back;
		         system("cls");  
		         break;
	      case 2:if(pos->next==NULL){printf("这是最后一个！");system("pause");}
		           else pos=pos->next;
		         system("cls");  
		         break;
		  case 3:system("cls");
	             printf("输入查找关键字（学号、姓名、成绩皆可）:");
	             scanf("%s",need);
	             system("cls");
	             ans=Find(pos,need);
	             if(ans==NULL){printf("没找到！");system("pause");}
	               else pos=ans;
	             system("cls");
	             break;
	      case 4:system("cls");pos=AddFront("users_st.txt","stu_data.txt",pos);break;              
		  case 5:system("cls");pos=Revise("stu_data.txt",pos);break;
		  case 6:printf("你确定真的要删除该学生信息吗（包括学生账户）？确定请按1，否则请按其他数字\n");
		         scanf("%d",&a);
		         if(a==1)pos=Delete("stu_data.txt","users_st.txt",pos);
		         if(pos==NULL)a=8;
		         system("cls");
		         break;
		  case 7:printf("你确定真的要重置该学生密码吗？确定请按1，否则请按其他数字\n");
		         scanf("%d",&a);
		         if(a==1)RebuildStuFile_3(pos->name,"users_st.txt");
		         system("cls");
		         break;
        }
    }while(a!=8);
    system("cls");
}
