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
	struct Contact pc;
	// 初始化通讯录
	Init(&pc);
	int input = 0;
	do
	{
		menu();
		printf("输入操作: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("展示通讯录\n");
			show(&pc);
			break;
		case 2:
			printf("增加通讯录\n");
			Add(&pc);
			break;
		case 3:
			printf("删除通讯录\n");
			sub(&pc);
			break;
		case 4:
			printf("修改通讯录\n");
			modify(&pc);
			break;
		case 5:
			printf("查找通讯录\n");
			search(&pc);
			break;
		case 6:
			printf("排序通讯录\n");
			sort_by_name(&pc);
			break;
		case 0:
			destroy(&pc);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}