#include"mainhead.h"

FILE *fout;

struct STU *p,*tail,*head;
void Print(char FileName[])
{
	double GPA;
	int i=0;
    struct STU *po=head;
    fout=fopen(FileName,"w");
    fprintf(fout,"学生信息\n");
    while(po->next != NULL)
	{
		fprintf(fout,"------------\n");
	    fprintf(fout,"学号：%s\n",po->num);
	    fprintf(fout,"姓名：%s\n",po->name);
	    fprintf(fout,"成绩：%s\n",po->grade);
	    GPA=atof(po->grade)/10-5.0;
	    if(GPA<=0.0)GPA=0;
	    fprintf(fout,"绩点：%.1f\n",GPA);
	    i++;
		po=po->next;
	}
	fprintf(fout,"------------\n");
	fprintf(fout,"学号：%s\n",po->num);
	fprintf(fout,"姓名：%s\n",po->name);
	fprintf(fout,"成绩：%s\n",po->grade);
	GPA=atof(po->grade)/10-5.0;
	if(GPA<=0.0)GPA=0;
	fprintf(fout,"绩点：%.1f\n",GPA);
    fprintf(fout,"------------\n");
    i++;
    fprintf(fout,"一共导出%d个学生信息！",i);
    fclose(fout);
    printf("一共导出%d个学生信息！请在本程序所在目录下查看“学生信息.txt”\n",i);
    system("pause");
    system("cls");
} 
//39
