#include"mainhead.h"
//�ж��û�����
//����ֵΪ2���û���ƥ�䡢����ƥ��
//����ֵΪ0���û�������ƥ�䣨����Ҳ����ƥ�䣩 
//����ֵΪ1���û���ƥ�䣬���벻��ƥ�� 
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
        char *_b=strstr(line,b);//������������ļ��е������Ƿ�ƥ�� 
        *_a='\0';//line����ֻʣ���û����� 
		if(strcmp(line,a)==0)
		{
		  if(strcmp(_b,b)==0){fclose(fin);return 2;}
			  else {fclose(fin);return 1;}
		}
	}
	fclose(fin);
	return 0;
} 
