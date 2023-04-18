#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("supervision.1.txt","w");
	
	if(p==NULL)
	{
		printf("File Not Open!!");
	}
	else
	{
		printf("Enter your data->");
		gets(data);
		fputs(data,p);
		fputs("\n",p);
		printf("data saved sucessfully!!");
	}
	fclose(p);
}
