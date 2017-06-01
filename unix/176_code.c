#include <stdio.h>
char *gets(char *s)
{
	int c;
	char *dest=s;
	int gotchar=0;
	while((c=getchar())!='\n' && c != EOF)
	{
		*dest++ = c;
		gotchar = 1;
	}
	*dest++ = '\0';
	if(c == EOF && !gotchar)
		return NULL;
	return s;	
}

void echo()
{
	char buf[8];
	gets(buf);
	puts(buf);
}

int main(int argc,char *argv[])
{
//	echo();
	int local;
	printf("local at %p\n",&local);
	return 0;	
}
