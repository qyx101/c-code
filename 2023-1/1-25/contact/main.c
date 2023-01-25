#include "name.h"
void menu()
{
	printf("--------------------------------\n");
	printf("|      1. show    2. add       |\n");
	printf("|      3. del     4. modify    |\n");
	printf("|      5. search  6. sort      |\n");
	printf("|      0. quit	               |\n");
	printf("--------------------------------\n");
}
int main()
{
	// 创建通讯录
	struct Contact con;
	// 初始化
	init_contact(&con);
	int input = 0;
	do {
		menu();
		printf("输入: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			show_contact(&con);
			break;
		case 2:
			add_contact(&con);
			break;
		case 3:
			del_contact(&con);
			break;
		case 4:
			modi_contact(&con);
			break;
		case 5:
			search_contact(&con);
			break;
		case 6:
			sort_contact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}