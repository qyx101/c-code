#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main()
{
	FILE* pc = fopen("E:\\项目\\VS代码\\Project16\\test1.txt", "r");
	if (NULL == pc)
	{
		perror("fopen");
		
	}
	else
	{
		printf("打开成功\n"); 

		// 写入文件
		//for (char i = 'a'; i < 'z'; i++)
		//{
		//	fputc(i, pc);
		//}
		// 
		
		//读文件
		int ret = fgetc(pc);
		printf("%c\n",ret);
		fclose(pc);
		pc = NULL;
	}
	
}