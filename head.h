#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void NewUser(char file[]);//ע�� 
void LoginUser(char file[]);//��½ 
void pwa(char s[]);//�������� 
int exist(char *file);//�ж�users_admin(stu).txt�Ƿ���� �� �Ƿ�Ϊ�� 
int FindString(char file[],char a[],char b[]);//�����Ĵ��룩�ж��û���������ƥ�� 
//void Add(char file[]);
extern int Check;
extern char Welcome[30];

