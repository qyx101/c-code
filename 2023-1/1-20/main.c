#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include "contact.h"
void menu()
{
	printf("--------------------------------\n");
	printf("|      1. add     2. del       |\n");
	printf("|      3. modify  4. search    |\n");
	printf("|      5. show    6. sort      |\n");
	printf("|      0. sort	               |\n");
	printf("--------------------------------\n");
}
int main()
{
	int input = 0;
	// 创建通讯录
	struct Peo_ed con;
	// 初始化通讯录
	init_con(&con);

	do
	{
		menu();
		printf("输入: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n");
			add_contact(&con);
			break;
		case 2:
			printf("\n");
			del_contact(&con);
			break;
		case 3:
			modi_contact(&con);
			break;
		case 4:
			search_contact(&con);
			break;
		case 5:
			printf("\n");
			show_contact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录\n");
			break;

		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}