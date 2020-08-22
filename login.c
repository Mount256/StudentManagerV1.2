#include "mainhead.h"

int Check; 
char Welcome[30];

void LoginUser(char file[])
{
	int bol;
	char user[30]="",password[30]="",line[30];
	if(exist(file)==1)
	{
	printf("登陆页面\n");
	printf("请输入用户名:");
	scanf("%s",user);
	printf("请输入密码:");
	pwa(password);
	printf("\n");
	bol=FindString(file,user,password);
    if(bol==2){/*printf("登陆成功！\n");*/strcpy(Welcome,user);Check=1;}
      else if(bol==0){printf("未找到该用户！\n");system("pause");system("cls");Check=0;}
	    else if(bol==1){printf("密码错误！\n"); system("pause");system("cls");Check=0;}
    }
    else 
	{
	Check=0;
	printf("没有注册用户，请先去注册。如果您是学生，请联系管理员\n");
    system("pause");
    }
}


