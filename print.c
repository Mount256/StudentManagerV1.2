#include"mainhead.h"

FILE *fout;

struct STU *p,*tail,*head;
void Print(char FileName[])
{
	double GPA;
	int i=0;
    struct STU *po=head;
    fout=fopen(FileName,"w");
    fprintf(fout,"ѧ����Ϣ\n");
    while(po->next != NULL)
	{
		fprintf(fout,"------------\n");
	    fprintf(fout,"ѧ�ţ�%s\n",po->num);
	    fprintf(fout,"������%s\n",po->name);
	    fprintf(fout,"�ɼ���%s\n",po->grade);
	    GPA=atof(po->grade)/10-5.0;
	    if(GPA<=0.0)GPA=0;
	    fprintf(fout,"���㣺%.1f\n",GPA);
	    i++;
		po=po->next;
	}
	fprintf(fout,"------------\n");
	fprintf(fout,"ѧ�ţ�%s\n",po->num);
	fprintf(fout,"������%s\n",po->name);
	fprintf(fout,"�ɼ���%s\n",po->grade);
	GPA=atof(po->grade)/10-5.0;
	if(GPA<=0.0)GPA=0;
	fprintf(fout,"���㣺%.1f\n",GPA);
    fprintf(fout,"------------\n");
    i++;
    fprintf(fout,"һ������%d��ѧ����Ϣ��",i);
    fclose(fout);
    printf("һ������%d��ѧ����Ϣ�����ڱ���������Ŀ¼�²鿴��ѧ����Ϣ.txt��\n",i);
    system("pause");
    system("cls");
} 
//39
