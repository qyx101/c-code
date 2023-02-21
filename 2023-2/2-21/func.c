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
	struct PeoInfo* ptr = (struct PeoInfo*)calloc(DEFAULT_SZ, sizeof(struct PeoInfo));
	if (NULL == ptr)
	{
		perror("calloc::");
		return;
	}
	pc->info = ptr;
	pc->capacity = DEFAULT_SZ;
	pc->sz = 0;

}
// 动态增加
void Add(struct Contact* pc)
{
	// 检查容量
	if (pc->sz == pc->capacity)
	{
		// 增容
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->info, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (NULL == ptr)
		{
			perror("realloc::");
			return;
		}
		pc->info = ptr;
		pc->capacity += INC_SZ;
		printf("增容成功\n");
	}
	else
	{
		//增加
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




// 静态增加
//void Add(struct Contact* pc)
//{
//	// 判断
//	if (pc->sz == MAX_INFO)
//	{
//		printf("通讯录已满,不可增加\n");
//		return;
//	}
//	else
//	{
//		//增加
//		printf("输入名字: ");
//		scanf("%s", pc->info[pc->sz].name);
//		printf("输入年龄: ");
//		scanf("%d", &pc->info[pc->sz].age);
//		printf("输入性别: ");
//		scanf("%s", pc->info[pc->sz].sex);
//		printf("输入电话: ");
//		scanf("%s", pc->info[pc->sz].tele);
//		printf("输入地址: ");
//		scanf("%s", pc->info[pc->sz].addr);
//		pc->sz++;
//	}
//}


void show(struct Contact* pc)
{
	printf("%-20s %-10s %-10s %-10s %-10s\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-10d %-10s %-10s %-10s\n",
			pc->info[i].name,
			pc->info[i].age,
			pc->info[i].sex,
			pc->info[i].tele,
			pc->info[i].addr
		);
	}
}

// 以名字查找对应下标
int find_by_name(struct Contact* pc, char* name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->info[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void sub(struct Contact* pc)
{
	// 查找
	printf("输入删除信息姓名: ");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (-1 == ret)
	{
		printf("找不到\n");
		return;
	}
	else
	{
		// 删除
		int i = 0;
		for (i = ret; i < pc->sz; i++)
		{
			pc->info[i] = pc->info[i + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}

void modify(struct Contact* pc)
{
	printf("输入修改姓名: ");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (-1 == ret)
	{
		printf("找不到\n");
		return;
	}
	else
	{
		// 修改
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

void search(struct Contact* pc)
{
	printf("输入查找名字: ");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = find_by_name(pc, name);
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
			pc->info[ret].addr
		);
	}

}

void destroy(struct Contact* pc)
{
	free(pc->info);
	pc->info = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
void swap(char* buf1, char* buf2, int size)
{
	while (size--)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			// 判断
			if ((*cmp)((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				// 交换
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
void sort_by_name(struct Contact* pc)
{
	bubble_sort(pc->info, pc->sz, sizeof(pc->info[0]), cmp_by_name);
}