#include"mainhead.h"

FILE *fin;

void Depart(char FileName[])
{
	char line[100],num[10],name[20],grade[5];
	fin=fopen(FileName,"r");
	while(fgets(line,100,fin))
	{
		int length=strlen(line),i=0;
		while(line[--length]>='!');
		line[length]='\0';
		char *_p1=strchr(line,' ');
		char *_p2=strrchr(line,' ');
		*_p1='\0';
		strcpy(num,line);
		strcpy(grade,_p2+1);
		*_p1=' ';
		*_p2='\0';
		strcpy(name,_p1+1); 
		printf("登陆成功！正在导入文件中...\n");
		system("cls");
		Enter(num,name,grade);
	}
	fclose(fin);
 } 
 //28
