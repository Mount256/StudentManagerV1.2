#include"mainhead.h"

FILE *fin;
struct query_result ME;
int FindStu(char FileName[],char query_name[])
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
		if(strcmp(query_name,name)==0)
		{
			strcpy(ME.num,num);
			strcpy(ME.name,name);
			strcpy(ME.grade,grade);
			fclose(fin);
			return 1;
		}
	}
	fclose(fin);
	return 0;
}

int FindStu_Check(char FileName[],char query_name[])
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
		if(strcmp(query_name,name)==0)
		{
			fclose(fin);
			return 1;
		}
	}
	fclose(fin);
	return 0;
}

