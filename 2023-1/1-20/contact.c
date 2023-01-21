#include "contact.h"

// 初始化通讯录
void init_con(struct Peo_ed* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
};

// 查找模块
int find_by_name(struct Peo_ed* pc, char name[NAME_MAX])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

// 增加通讯录
void add_contact(struct Peo_ed* pa)
{
	if (pa->sz == MAX)
	{
		printf("通讯录以满，不可增加\n");
		return;
	}

	else
	{
		printf("输入名字: ");
		scanf("%s", pa->data[pa->sz].name);
		printf("输入年纪: ");
		scanf("%d", &pa->data[pa->sz].age);
		printf("输入性别: ");
		scanf("%s", pa->data[pa->sz].sex);
		printf("输入地址: ");
		scanf("%s", pa->data[pa->sz].addr);
		printf("输入电话: ");
		scanf("%s", pa->data[pa->sz].tele);
		pa->sz++;
	}
}

// 删除通讯录
void del_contact(struct Peo_ed* pc)
{
	char del_name[NAME_MAX] = {0};
	// 判断
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	else
	{
		printf("输入要删除人的姓名: ");
		scanf("%s", del_name);
		// 查找
		int res = find_by_name(pc, del_name);
		if (-1 == res)
		{
			printf("删除的人不存在\n");
		}
		else
		{
			// 删除
			for (int i = res; i < pc->sz - 1; i++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}		
	}
	
}

// 查看通讯录
void show_contact(struct Peo_ed* pc)
{
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","名字","年龄","性别","地址","电话");
	//-20左对齐
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\n\n", 
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].addr,
			pc->data[i].tele);
	}
}

// 查找通讯录
void search_contact(struct Peo_ed* pc)
{	
	char name[NAME_MAX] = { 0 };
	printf("输入要查找的姓名: ");
	scanf("%s", name);
	int res = find_by_name(pc, name);
	if (-1 == res)
	{
		printf("查找的人不存在\n");
	}
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "名字", "年龄", "性别", "地址", "电话");
		printf("%-10s\t%-10d\t%-10s\t%-10s\t%-10s\n",
			pc->data[res].name,
			pc->data[res].age,
			pc->data[res].sex,
			pc->data[res].addr,
			pc->data[res].tele);
	}
}

// 修改通讯录
void modi_contact(struct Peo_ed* pc)
{
	char modi_name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空无法修改\n");
	}
	// 查找
	printf("输入要修改的姓名: ");
	scanf("%s", modi_name);
	int res = find_by_name(pc, modi_name);
	if (-1 == res)
	{
		printf("要修改的姓名不存在\n");
	}
	else
	{
		printf("输入名字: ");
		scanf("%s", pc->data[res].name);
		printf("输入年纪: ");
		scanf("%d", &pc->data[res].age);
		printf("输入性别: ");
		scanf("%s", pc->data[res].sex);
		printf("输入地址: ");
		scanf("%s", pc->data[res].addr);
		printf("输入电话: ");
		scanf("%s", pc->data[res].tele);
		printf("修改完成\n");
	}
}