#include"head.h"
FILE *fout1,*fout2;

void NewUser(char file[])
{
	int bol;int a;
	if(exist(file)==0)fout1=fopen(file,"w");//�����������½��ļ� 
	fclose(fout1);
	fout2=fopen(file,"a");
	char user[30]="",password[30]="",password1[30]="";
	do//ע���û��� 
	{
	printf("ע��ҳ��\n");
	printf("�������û���:");
	scanf("%s",user);
	bol=FindString("users_ad.txt",user,"a");
	if(bol!=0)//�ж��û���������� 
    {
    	printf("\n���и��û������Ƿ񷵻ز˵������밴1\n");
    	scanf("%d",&a);
    	if(a==1){system("cls");return;}
    	system("cls");
	 } 
    }while(bol!=0);
	do
	{
	  printf("\n����������:");
	  pwa(password);
	  printf("\n����һ������������ȷ��:");
	  pwa(password1);
	  if(strcmp(password,password1)!=0)
	  {
	  	printf("\n��������������벻һ�£����ٴ��������룡�Ƿ񷵻ز˵������밴1\n");
	  	scanf("%d",&a);
    	if(a==1){system("cls");return;}
	    system("cls");
	    printf("ע��ҳ��\n");
	    printf("�������û���:%s",user);
	  }
    }while(strcmp(password,password1)!=0);
    system("cls");
    fprintf(fout2,"%s ",user);
    fprintf(fout2,"%s\n",password);
    fclose(fout2);
    printf("ע��ɹ���\n");
    system("pause");
    system("cls");
}




