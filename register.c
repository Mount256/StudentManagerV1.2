#include"head.h"
FILE *fout1,*fout2;

void NewUser(char file[])
{
	int bol;int a;
	if(exist(file)==0)fout1=fopen(file,"w");//若不存在则新建文件 
	fclose(fout1);
	fout2=fopen(file,"a");
	char user[30]="",password[30]="",password1[30]="";
	do//注册用户名 
	{
	printf("注册页面\n");
	printf("请输入用户名:");
	scanf("%s",user);
	bol=FindString("users_ad.txt",user,"a");
	if(bol!=0)//判断用户名重名情况 
    {
    	printf("\n已有该用户名！是否返回菜单？是请按1\n");
    	scanf("%d",&a);
    	if(a==1){system("cls");return;}
    	system("cls");
	 } 
    }while(bol!=0);
	do
	{
	  printf("\n请输入密码:");
	  pwa(password);
	  printf("\n请再一次输入密码以确认:");
	  pwa(password1);
	  if(strcmp(password,password1)!=0)
	  {
	  	printf("\n您两次输入的密码不一致！请再次输入密码！是否返回菜单？是请按1\n");
	  	scanf("%d",&a);
    	if(a==1){system("cls");return;}
	    system("cls");
	    printf("注册页面\n");
	    printf("请输入用户名:%s",user);
	  }
    }while(strcmp(password,password1)!=0);
    system("cls");
    fprintf(fout2,"%s ",user);
    fprintf(fout2,"%s\n",password);
    fclose(fout2);
    printf("注册成功！\n");
    system("pause");
    system("cls");
}




