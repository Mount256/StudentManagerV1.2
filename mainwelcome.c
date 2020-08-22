#include"mainhead.h"

int Check;
char Welcome[30];
FILE *fin;

int main()
{
	char a;
	do
	{
	system("cls");
	printf("  学生管理信息系统欢迎页面\n");
	printf("       作者：Mount256       \n");
	printf("============================\n");
	printf(" |       1.学生登陆       |\n");
	printf(" |      2.管理员登陆      |\n");
	printf(" |      3.管理员注册      |\n");
	printf(" |       4.作者的话       |\n");
	printf(" |         5.关于         |\n");
	printf(" |         6.退出         |\n");
	printf("============================\n");
	printf("请输入要操作的序号：");
	scanf("%c",&a);
	system("cls");
	if(a=='1')
	{
	 LoginUser("users_st.txt");
	 if(Check){WelStudent(Welcome);}
    }
	else if(a=='2')
	{
	 LoginUser("users_ad.txt");	
	 if(Check){WelTeacher(Welcome);}
    }
	else if(a=='3')NewUser("users_ad.txt"); 
	else if(a=='4')Author();
	else if(a=='5')Guanyu();
    }while(a!='6');
    return 0;
}






