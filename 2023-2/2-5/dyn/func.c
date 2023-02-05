// 函数实现
#include "name.h"

// 静态初始化
//void Init(struct Contact* pc)
//{
//	memset(pc->info, 0, sizeof(pc->info));
//	pc->sz = 0;
//}

// 动态初始化
void Init(struct Contact* pc)
{
	pc->capacity = BASE;
	pc->sz = 0;
	struct PeoInfo* tmp = (struct PeoInfo*)calloc(BASE, sizeof(struct PeoInfo));
	if (NULL == tmp)
	{
		perror("calloc");
		return;
	}
	else
	{
		pc->info = tmp;
	}
}

// 静态增加
//void add(struct Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，不可增加\n");
//		return;
//	}
//	else
//	{
//		// 增加通讯录
//		printf("输入姓名: ");
//		scanf("%s", pc->info[pc->sz].name);
//		printf("输入年龄: ");
//		scanf("%d", &pc->info[pc->sz].age);
//		printf("输入性别: ");
//		scanf("%s", pc->info[pc->sz].sex);
//		printf("输入地址: ");
//		scanf("%s", pc->info[pc->sz].addr);
//		printf("输入电话: ");
//		scanf("%s", pc->info[pc->sz].tele);
//		pc->sz++;
//	}
//}

// 动态增加
void add(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//增容
		printf("容量不够进行增容\n");
		struct PeoInfo* tmp =(struct PeoInfo*)realloc(pc->info, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		pc->capacity += 2;
		printf("增容成功\n");
	}

		printf("输入姓名: ");
		scanf("%s", pc->info[pc->sz].name);
		printf("输入年龄: ");
		scanf("%d", &pc->info[pc->sz].age);
		printf("输入性别: ");
		scanf("%s", pc->info[pc->sz].sex);
		printf("输入地址: ");
		scanf("%s", pc->info[pc->sz].addr);
		printf("输入电话: ");
		scanf("%s", pc->info[pc->sz].tele);
		pc->sz++;
}

// 显示通讯录
void show(struct Contact* pc)
{
	size_t i = 0;
	printf("%-20s %-10s %-10s %-10s %-10s\n", "姓名", "年龄", "性别", "地址", "电话");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-10d %-10s %-10s %-10s\n", pc->info[i].name, pc->info[i].age, pc->info[i].sex, pc->info[i].addr, pc->info[i].tele);

	}
}

// 搜索工具
int Tool(struct Contact* pc, char* name)
{
	size_t i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		int ret = strcmp(name, pc->info[i].name);
		if (0 == ret)
		{
			return i;
		}
	}
	return -1;
}

// 删除通讯录
void del(struct Contact* pc)
{
	//搜索
	char DelName[MAX_NAEM] = { 0 };
	printf("输入名字: ");
	scanf("%s", DelName);
	int ret = Tool(pc, DelName);
	if (-1 == ret)
	{
		printf("删除失败\n");
		return;
	}
	else
	{
		struct PeoInfo tmp;
		tmp = pc->info[ret];
		pc->info[ret] = pc->info[ret + 1];
		pc->sz--;
		printf("删除成功\n");
	}
}

// 修改通讯录
void modi(struct Contact* pc)
{	
	printf("输入名字: ");
	char ModiName[MAX_NAEM];
	scanf("%s", ModiName);
	int ret = Tool(pc, ModiName);
	if (-1 == ret)
	{
		printf("修改失败\n");
		return;
	}
	else
	{
		printf("输入姓名: ");
		scanf("%s", pc->info[ret].name);
		printf("输入年龄: ");
		scanf("%d", &pc->info[ret].age);
		printf("输入性别: ");
		scanf("%s", pc->info[ret].sex);
		printf("输入地址: ");
		scanf("%s", pc->info[ret].addr);
		printf("输入电话: ");
		scanf("%s", pc->info[ret].tele);
		printf("修改成功\n");
	}
}

// 查询通讯录
void search(struct Contact* pc)
{
	printf("输入查询名字: ");
	char SearName[MAX_NAEM];
	scanf("%s", SearName);
	int ret = Tool(pc, SearName);
	if (-1 == ret)
	{
		printf("查询失败\n");
		return;
	}
	else
	{
		printf("%-20s %-10d %-10s %-10s %-10s\n", pc->info[ret].name, pc->info[ret].age, pc->info[ret].sex, pc->info[ret].addr, pc->info[ret].tele);
	}
}

// 销毁通讯录
void* Destroy(struct Contact* pc)
{
	free(pc->info);
	pc->info = NULL;
	pc->sz = 0;
	pc->capacity = 0;
	printf("销毁成功 ");
}



