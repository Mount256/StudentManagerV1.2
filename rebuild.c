#include"mainhead.h"

FILE *fout,*fout1;
struct STU *p,*tail,*head;

void RebuildStuFile_1(char FileName[])//ѧ�����ݸ��� 
{
	fout=fopen(FileName,"w");
	struct STU *po=head;
	while(po->next != NULL)
	{
		fprintf(fout,"%s %s %s\n",po->num,po->name,po->grade);
		po=po->next;
	}
	fprintf(fout,"%s %s %s\n",po->num,po->name,po->grade);
	fclose(fout);
}

void RebuildStuFile_2(char name[],char FileName[])//�û����ݸ��£�ɾ���û��� 
{
	char line[60];
	fout=fopen(FileName,"r+");
	fout1=fopen("tmp.txt","w+");
	while(fgets(line,60,fout))
	{
		int length=strlen(line);
		while(line[--length]>='!');
        line[length]='\0';
        char *_a=strchr(line,' ');
        *_a='\0';
        if(strcmp(line,name)!=0)
		{
			*_a=' ';
		    fprintf(fout1,"%s\n",line);
		}
    }
    fclose(fout);
    fclose(fout1);
    if(remove(FileName)!=0){perror("remove fail�����ִ���ʾ˵��ɾ��ʧ�ܣ�");system("pause");}
    if(rename("tmp.txt",FileName)!=0){perror("rename fail�����ִ���ʾ˵��ɾ��ʧ�ܣ�");system("pause");} 
}

void RebuildStuFile_3(char name[],char FileName[])//ѧ���������� 
{
	char line[60];
	fout=fopen(FileName,"r+");
	fout1=fopen("tmp.txt","w+");
	while(fgets(line,60,fout))
	{
		int length=strlen(line);
		while(line[--length]>='!');
        line[length]='\0';
        char *_a=strchr(line,' ');
        *_a='\0';
        if(strcmp(line,name)!=0)
		{
			*_a=' ';
		    fprintf(fout1,"%s\n",line);
		}
        else 
        {
        	fprintf(fout1,"%s 123456\n",name);
		}
    }
    fclose(fout);
    fclose(fout1);
    if(remove(FileName)!=0){perror("remove fail�����ִ���ʾ˵������ʧ�ܣ�");system("pause");}
    if(rename("tmp.txt",FileName)!=0){perror("rename fail�����ִ���ʾ˵������ʧ�ܣ�");system("pause");} 
}

void RebuildStuFile_4(char name[],char password[],char FileName[])//�޸�����
{
	char line[60];
	fout=fopen(FileName,"r+");
	fout1=fopen("tmp.txt","w+");
	while(fgets(line,60,fout))
	{
		int length=strlen(line);
		while(line[--length]>='!');
        line[length]='\0';
        char *_a=strchr(line,' ');
        *_a='\0';
        if(strcmp(line,name)!=0)
		{
			*_a=' ';
		    fprintf(fout1,"%s\n",line);
		}
        else 
        {
        	fprintf(fout1,"%s %s\n",name,password);
		}
    }
    fclose(fout);
    fclose(fout1);
    if(remove(FileName)!=0){perror("remove�����ִ���ʾ˵���޸�ʧ�ܣ�");system("pause");}
    if(rename("tmp.txt",FileName)!=0){perror("rename�����ִ���ʾ˵���޸�ʧ�ܣ�");system("pause");} 
      else printf("�޸ĳɹ���"); 
}
