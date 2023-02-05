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
enum option
{
	QUIT,
	SHOW,
	ADD,
	DEL,
	MODI,
	SEAR,
	SORT
};
int main()
{
	// 创建通讯录
	struct Contact pc;

	// 通讯录初始化
	Init(&pc);
	int input = 0;
	do
	{
		menu();
		printf("选择: ");
		scanf("%d", &input);
		switch (input)
		{
		case SHOW:
			show(&pc);
			break;
		case ADD:
			add(&pc);
			break;
		case DEL:
			del(&pc);
			break;
		case MODI:
			modi(&pc);
			break;
		case SEAR:
			search(&pc);
			break;
		case SORT:
			//SortByName(&pc);
			break;
		case QUIT:
			Destroy(&pc);
			printf("退出通讯录");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}