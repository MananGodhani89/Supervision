#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p= fopen("filehandin.txt","w");
	
	if(p == NULL)
	{
		printf("file could not open");
	}
	else
	{
		printf("filre open successfully\n");
		printf("write here=\n");
		gets(data);
		fputs(data,p);
		printf("\nediting successfullly");
		fclose(p);
	}
	
}
