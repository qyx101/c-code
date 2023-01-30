#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable:4996)

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_ADDR 20
#define MAX_TELE 12
#define MAX 1000

#define DEFAULT_SZ 3
#define INC_SZ 2

// 人的信息
struct info_peo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

// 静态 通讯录
//struct Contact
//{
//	struct info_peo info[MAX];//信息
//	int sz; //通讯录中信息的个数
//};

// 动态
struct Contact
{
	struct info_peo* info;	// info指向存放动态增长的空间
	int sz;		// 通讯录中信息的个数
	int max_capa;	// 通讯录最大容量
};

// 初始化声明
void init_contact(struct Contact* con);

//销毁通讯录
void destroy_con(struct Contact* con);

// 增加通讯录声明
void add_contact(struct Contact* con);

// 显示通讯录声明
void show_contact(struct Contact* con);

// 删除通讯录 声明
void del_contact(struct Contact* con);

// 修改通讯录声明
void modi_contact(struct Contact* con);

// 以名字搜索 声明
void search_contact(struct Contact* con);

// 以名字排序 声明
void sort_contact(struct Contact* con);