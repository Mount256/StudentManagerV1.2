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
	printf("  ѧ��������Ϣϵͳ��ӭҳ��\n");
	printf("       ���ߣ�Mount256       \n");
	printf("============================\n");
	printf(" |       1.ѧ����½       |\n");
	printf(" |      2.����Ա��½      |\n");
	printf(" |      3.����Աע��      |\n");
	printf(" |       4.���ߵĻ�       |\n");
	printf(" |         5.����         |\n");
	printf(" |         6.�˳�         |\n");
	printf("============================\n");
	printf("������Ҫ��������ţ�");
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






