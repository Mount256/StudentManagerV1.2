#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void NewUser(char file[]);//注册 
void LoginUser(char file[]);//登陆 
void pwa(char s[]);//密码掩码 
int exist(char *file);//判断users_admin(stu).txt是否存在 或 是否为空 
int FindString(char file[],char a[],char b[]);//（核心代码）判断用户名、密码匹配 
//void Add(char file[]);
extern int Check;
extern char Welcome[30];

