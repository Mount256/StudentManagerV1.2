#include"mainhead.h"

FILE *fout,*fout1;
struct STU *p,*tail,*head;

void RebuildStuFile_1(char FileName[])//学生数据更新 
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

void RebuildStuFile_2(char name[],char FileName[])//用户数据更新（删除用户） 
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
    if(remove(FileName)!=0){perror("remove fail（出现此提示说明删除失败）");system("pause");}
    if(rename("tmp.txt",FileName)!=0){perror("rename fail（出现此提示说明删除失败）");system("pause");} 
}

void RebuildStuFile_3(char name[],char FileName[])//学生密码重置 
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
    if(remove(FileName)!=0){perror("remove fail（出现此提示说明重置失败）");system("pause");}
    if(rename("tmp.txt",FileName)!=0){perror("rename fail（出现此提示说明重置失败）");system("pause");} 
}

void RebuildStuFile_4(char name[],char password[],char FileName[])//修改密码
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
    if(remove(FileName)!=0){perror("remove（出现此提示说明修改失败）");system("pause");}
    if(rename("tmp.txt",FileName)!=0){perror("rename（出现此提示说明修改失败）");system("pause");} 
      else printf("修改成功！"); 
}
