#include "name.h"

//静态初始化
//void InitContact(struct Contact* pc)
//{
//	memset(pc->info, 0, sizeof(pc->info));
//	pc->sz = 0;
//}

//动态初始化
//void InitContact(struct Contact* pc)
//{
//	 = (struct PeoInfo*)calloc(INIT, struct PeoInfo);
//}

void Add(struct Contact* pc)
{
	//判断通讯录是否满
	if (pc->sz == 5)
	{
		printf("通讯录已满");
		return;
	}
	else
	{
		// 增加
		printf("输入名字: ");
		scanf("%s", pc->info[pc->sz].name);
		printf("输入年龄: ");
		scanf("%d", &pc->info[pc->sz].age);
		printf("输入性别: ");
		scanf("%s", pc->info[pc->sz].sex);
		printf("输入电话: ");
		scanf("%s", pc->info[pc->sz].tele);
		printf("输入地址: ");
		scanf("%s", pc->info[pc->sz].addr);
		pc->sz++;
	}
}

void Show(struct Contact* pc)
{
	printf("%-20s %-10s %-10s %-10s %-10s\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-10d %-10s %-10s %-10s\n", 
			pc->info[i].name,
			pc->info[i].age, 
			pc->info[i].sex, 
			pc->info[i].tele,
			pc->info[i].addr);
	}
}

// 通过名字，找到对应下标
int find(struct Contact* pc, char* name)
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->info[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Del(struct Contact* pc)
{
	char DelName[MAX_NAME];
	printf("输入: ");
	scanf("%s", DelName);
	int ret = find(pc, DelName);
	if (-1 == ret)
	{
		printf("找不到\n");
		return;
	}
	else
	{
		for (int i = ret; i < pc->sz; i++)
		{
			struct PeoInfo tmp = pc->info[i];
			pc->info[i] = pc->info[i + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}

}

void Modify(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("输入: ");
	scanf("%s", name);
	int ret = find(pc, name);
	if (-1 == ret)
	{
		printf("找不到\n");
		return;
	}
	else
	{
		printf("输入名字: ");
		scanf("%s", pc->info[ret].name);
		printf("输入年龄: ");
		scanf("%d", &pc->info[ret].age);
		printf("输入性别: ");
		scanf("%s", pc->info[ret].sex);
		printf("输入电话: ");
		scanf("%s", pc->info[ret].tele);
		printf("输入地址: ");
		scanf("%s", pc->info[ret].addr);
	}
}

void Search(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("输入: ");
	scanf("%s", name);
	int ret = find(pc, name);
	if (-1 == ret)
	{
		printf("找不到\n");
		return;
	}
	else
	{
		printf("%-20s %-10s %-10s %-10s %-10s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s %-10d %-10s %-10s %-10s\n",
			pc->info[ret].name,
			pc->info[ret].age,
			pc->info[ret].sex,
			pc->info[ret].tele,
			pc->info[ret].addr);
	}
}