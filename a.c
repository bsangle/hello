#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int count=0,th=5,n;
	fp=fopen("a.txt","r");
	if(fp==NULL)
	{
		printf("cannot open");
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		if(ch=='\n')
		{
			count=count+1;
		}
			
		printf("%c",ch);
		ch=fgetc(fp);
		if(count<=th)
		{
			n=count;
			int a[n][n];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
					printf("%d",a[i][j]);
				printf("\n");
			}
		}
				
	}
	fclose(fp);
	printf("number of lines %d",count);
	return 0;
}
