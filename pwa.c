#include "mainhead.h"

void pwa(char s[])
{
    int ch,i=0;
    while ((ch = getch ()) != '\r') 
	{
        putchar ('*');
        s[i]=(char)ch;
        i++;
    }
}

