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

extern int Check;//�ɹ���½�ı�־ 
extern char Welcome[30];//��ʾ�û��� ��ӭ�� 

void NewUser(char file[]);//ע�� 
void LoginUser(char file[]);//��½ 
void pwa(char s[]);//�������� 
int exist(char *file);//�ж�users_admin(stu).txt�Ƿ���� �� �Ƿ�Ϊ�� 
int FindString(char file[],char a[],char b[]);//�����Ĵ��룩�ж��û���������ƥ�� 
//======================================================================================== 
int exist(char *file);//�ļ��Ƿ���� 
void WelTeacher(char name[]);//��ӭ���棨��ʦ�� 

void Depart(char FileName[]);//��ȡѧ���ļ��������ַ��� 
void Print(char FileName[]);//��ӡȫ��ѧ����Ϣ 

void Add(char file_users[],char file_data[]);//1.���ѧ���˻� 
struct STU* AddFront(char file_users[],char file_data[],struct STU *pos);//2-2.��ǰ���ѧ���˻� 

void Enter(char _num[],char _name[],char _grade[]);//����õ��ַ�������˫������ṹ
void Browse(struct STU *pos);//2.���ѧ����Ϣ 

struct STU *Find(struct STU *pos,char keywords[]);//2-1.����ģʽ 
struct STU *Revise(char FileName[],struct STU *pos);//2-3.�޸�ģʽ

void RebuildStuFile_1(char FileName[]);//����Լ��޸�ѧ��֮����ļ����� 
void RebuildStuFile_2(char name[],char FileName[]);//ɾ��ѧ��֮����ļ�����
void RebuildStuFile_3(char name[],char FileName[]);//����ѧ������ 
void RebuildStuFile_4(char name[],char password[],char FileName[]);//�޸����� 

struct STU *Delete(char FileData[],char FileUser[],struct STU *pos);//2-5.ɾ��ѧ���˻� 
//========================================================================================
void WelStudent(char name[]);//��ӭ���棨ѧ���� 
int FindStu(char FileName[],char _name[]);//�ҵ�ѧ������Ϣ 
int FindStu_Check(char FileName[],char query_name[]);//ѧ������
//================================================================================
void Guanyu(); 
void Author();
void instrction(); 

