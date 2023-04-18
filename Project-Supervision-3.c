#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("Supervision.2.txt","a");
	
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
		printf("Data entered Successfully!!");
	}
   fclose(p);
   printf("\n__________________________________________________________\n");
   
   p=fopen("supervision.2.txt","r");
   if(p==NULL)
   {
   	printf("File Not Open...");
   }
   else
   {
   	 while(fgets(data,50,p)!=NULL)
   	 {
   	   printf("%s",data);	
	 }
   }
   fclose(p);
}
