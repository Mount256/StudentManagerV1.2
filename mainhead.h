#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<malloc.h>

struct STU{
	char num[10];
	char name[20];
	char grade[5];
	struct STU *next,*back;
}; 
extern struct STU *tail,*p,*head;

struct query_result
{
	char num[10];
	char name[20];
	char grade[5];
};
extern struct query_result ME;

extern int Check;//成功登陆的标志 
extern char Welcome[30];//显示用户名 欢迎词 

void NewUser(char file[]);//注册 
void LoginUser(char file[]);//登陆 
void pwa(char s[]);//密码掩码 
int exist(char *file);//判断users_admin(stu).txt是否存在 或 是否为空 
int FindString(char file[],char a[],char b[]);//（核心代码）判断用户名、密码匹配 
//======================================================================================== 
int exist(char *file);//文件是否存在 
void WelTeacher(char name[]);//欢迎界面（老师） 

void Depart(char FileName[]);//读取学生文件，分离字符串 
void Print(char FileName[]);//打印全部学生信息 

void Add(char file_users[],char file_data[]);//1.添加学生账户 
struct STU* AddFront(char file_users[],char file_data[],struct STU *pos);//2-2.向前添加学生账户 

void Enter(char _num[],char _name[],char _grade[]);//分离好的字符串生成双向链表结构
void Browse(struct STU *pos);//2.浏览学生信息 

struct STU *Find(struct STU *pos,char keywords[]);//2-1.查找模式 
struct STU *Revise(char FileName[],struct STU *pos);//2-3.修改模式

void RebuildStuFile_1(char FileName[]);//添加以及修改学生之后的文件操作 
void RebuildStuFile_2(char name[],char FileName[]);//删除学生之后的文件操作
void RebuildStuFile_3(char name[],char FileName[]);//重置学生密码 
void RebuildStuFile_4(char name[],char password[],char FileName[]);//修改密码 

struct STU *Delete(char FileData[],char FileUser[],struct STU *pos);//2-5.删除学生账户 
//========================================================================================
void WelStudent(char name[]);//欢迎界面（学生） 
int FindStu(char FileName[],char _name[]);//找到学生的信息 
int FindStu_Check(char FileName[],char query_name[]);//学生查重
//================================================================================
void Guanyu(); 
void Author();
void instrction(); 

