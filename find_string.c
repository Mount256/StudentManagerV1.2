#include"mainhead.h"
//判断用户密码
//返回值为2：用户名匹配、密码匹配
//返回值为0：用户名不能匹配（密码也不能匹配） 
//返回值为1：用户名匹配，密码不能匹配 
FILE *fin;
int FindString(char file[],char a[],char b[])
{
	char line[60];
	int length;
	fin=fopen(file,"r");
	while(fgets(line,60,fin))
	{
		length=strlen(line);
		while(line[--length]>='!');
        line[length]='\0';
        char *_a=strchr(line,' ');
        char *_b=strstr(line,b);//输入的密码与文件中的密码是否匹配 
        *_a='\0';//line里面只剩下用户名了 
		if(strcmp(line,a)==0)
		{
		  if(strcmp(_b,b)==0){fclose(fin);return 2;}
			  else {fclose(fin);return 1;}
		}
	}
	fclose(fin);
	return 0;
} 
