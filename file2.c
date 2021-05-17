#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("data.txt","r");
	while(1)
	{
		ch=fgetc(ptr);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fseek(ptr,0,SEEK_SET);
	printf("\n");
	fclose(ptr);
	while(1)
	{
		ch=fgetc(ptr);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	return 0;
}
/*
file pointer
FILE *ptr;
open: fopen()
syn: fptr=fopen("file_name","mode")
mode-->  read write append
          r    w     a
          
fgetc()
EOF-->end of file

*/
