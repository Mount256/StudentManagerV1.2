#include"mainhead.h"

int exist(char *file)
{
	FILE *fp;
	char line[70];
	fp=fopen(file,"r");
	if((fp==NULL)||(fgets(line,60,fp)==NULL))
	{
		fclose(fp);
	return 0;
    }
	else
	{
		fclose(fp);
		return 1;
	}
}
//18
