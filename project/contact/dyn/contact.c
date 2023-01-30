#include "name.h"

// 销毁 通讯录实现
void destroy_con(struct Contact* con)
{
	free(con->info);
	con->info = NULL;
	con->sz = 0;
	con->max_capa = 0;

}
// 静态 初始化通讯录 实现
//void init_contact(struct Contact* con)
//{
//	con->sz = 0;
//	memset(con->info, 0, sizeof(con->info));
//}

// 动态 初始化
void init_contact(struct Contact* con)
{
	con->sz = 0;
	struct Contact* ptr = (struct Contact*)calloc(DEFAULT_SZ, sizeof(struct info_peo));
	if (ptr == NULL)
	{
		perror("init_contact: calloc");
		return;
	}
	con->info = ptr;
	con->max_capa = DEFAULT_SZ;
}

// 查找
int find_by_name(struct Contact* con, char* name)
{
	size_t i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if ((strcmp(con->info[i].name, name)) == 0)
		{
			return i;
		}
	}
}

// 静态 增加通讯录 实现
//void add_contact(struct Contact* con)
//{
//	if (con->sz == MAX)
//	{
//		printf("不可增加，通讯录已满\n");
//	}
//	else
//	{
		/*printf("输入姓名: ");
		scanf("%s", con->info[con->sz].name);
		printf("输入年龄: ");
		scanf("%d", &con->info[con->sz].age);
		printf("输入性别: ");
		scanf("%s", con->info[con->sz].sex);
		printf("输入地址: ");
		scanf("%s", con->info[con->sz].addr);
		printf("输入电话: ");
		scanf("%s", con->info[con->sz].tele);
		con->sz++;*/
//	}
//}
void check_capa(struct Contact* con)
{
	if (con->sz == con->max_capa)
	{
		// 增容
		struct Contact* ptr = (struct Contact*)realloc(con->info,(con->max_capa + 2) * sizeof(struct info_peo));
		if (ptr == NULL)
		{
			perror("cheack_capa: realloc");
			return;
		}
		con->info = ptr;
		con->max_capa += 2;
		printf("增容成功\n");
	}
}

// 动态 增加通讯录 实现
void add_contact(struct Contact* con)
{
	// 检查容量
	check_capa(con);

	//增加一个人
	printf("输入姓名: ");
	scanf("%s", con->info[con->sz].name);
	printf("输入年龄: ");
	scanf("%d", &con->info[con->sz].age);
	printf("输入性别: ");
	scanf("%s", con->info[con->sz].sex);
	printf("输入地址: ");
	scanf("%s", con->info[con->sz].addr);
	printf("输入电话: ");
	scanf("%s", con->info[con->sz].tele);
	con->sz++;
}



// 显示通讯录 实现
void show_contact(struct Contact* con)
{
	printf("%-20s %-10s %-10s %-10s %-10s\n", "名字", "年龄", "性别", "地址", "电话");
	size_t i = 0;
	for (i = 0; i < con->sz; i++)
	{
		printf("%-20s %-10d %-10s %-10s %-10s\n",
			con->info[i].name,
			con->info[i].age,
			con->info[i].sex,
			con->info[i].addr,
			con->info[i].tele);
	}
}

// 删除通讯录 实现
void del_contact(struct Contact* con)
{
	char del_name[MAX_NAME] = { 0 };
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("输入要删除的姓名: ");
		scanf("%s", del_name);
		// 查找对应姓名的下标
		int ret = find_by_name(con, del_name);
		// 删除
		size_t i = 0;
		for (i = ret; i < con->sz; i++)
		{
			con->info[i] = con->info[i + 1];
		}
		con->sz--;
		printf("删除成功\n");
	}
}

// 修改通讯录 实现
void modi_contact(struct Contact* con)
{
	char modi_name[MAX_NAME] = { 0 };
	printf("输入选择修改的名字: ");
	scanf("%s", modi_name);
	int ret = find_by_name(con, modi_name);

	printf("输入姓名: ");
	scanf("%s", con->info[ret].name);
	printf("输入年龄: ");
	scanf("%d", &con->info[ret].age);
	printf("输入性别: ");
	scanf("%s", con->info[ret].sex);
	printf("输入地址: ");
	scanf("%s", con->info[ret].addr);
	printf("输入电话: ");
	scanf("%s", con->info[ret].tele);


}

// 以名字搜索 实现
void search_contact(struct Contact* con)
{
	char name[MAX_NAME] = { 0 };
	printf("输入搜索的名字: ");
	scanf("%s", name);
	int ret = find_by_name(con, name);
	printf("%-20s %-10s %-10s %-10s %-10s\n", "名字", "年龄", "性别", "地址", "电话");
	printf("%-20s %-10d %-10s %-10s %-10s\n",
		con->info[ret].name,
		con->info[ret].age,
		con->info[ret].sex,
		con->info[ret].addr,
		con->info[ret].tele);
}

// 以名字排序 实现
void sort_contact(struct Contact* con)
{
	size_t i = 0;
	for (i = 0; i < con->sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < con->sz - 1 - i; j++)
		{
			struct info_peo tmp = con->info[j];
			con->info[j] = con->info[j + 1];
			con->info[j + 1] = tmp;
		}
	}
}