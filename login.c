#include "mainhead.h"

int Check; 
char Welcome[30];

void LoginUser(char file[])
{
	int bol;
	char user[30]="",password[30]="",line[30];
	if(exist(file)==1)
	{
	printf("��½ҳ��\n");
	printf("�������û���:");
	scanf("%s",user);
	printf("����������:");
	pwa(password);
	printf("\n");
	bol=FindString(file,user,password);
    if(bol==2){/*printf("��½�ɹ���\n");*/strcpy(Welcome,user);Check=1;}
      else if(bol==0){printf("δ�ҵ����û���\n");system("pause");system("cls");Check=0;}
	    else if(bol==1){printf("�������\n"); system("pause");system("cls");Check=0;}
    }
    else 
	{
	Check=0;
	printf("û��ע���û�������ȥע�ᡣ�������ѧ��������ϵ����Ա\n");
    system("pause");
    }
}


