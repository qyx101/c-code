#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable:4996)
#define MAX_NAEM 20
#define MAX_SEX 10
#define MAX_ADDR 20
#define MAX_TELE 12 
#define MAX 5
#define BASE 3
#define INC_SZ 2

struct PeoInfo
{
	char name[MAX_NAEM];
	int age;
	char sex[MAX_SEX];
	char addr[MAX_ADDR];
	char tele[MAX_TELE];
};

// 静态
//struct Contact
//{
//	struct PeoInfo info[MAX];
//	int sz;
//};

// 动态
struct Contact
{
	struct PeoInfo* info;
	int sz;
	int capacity;
};


// 函数声明


// 初始化
void Init(struct Contact* pc);
// 增加
void add(struct Contact* pc);
// 显示
void show(struct Contact* pc);
//搜索工具
int Tool(struct Contact* pc,char* name);
// 删除
void del(struct Contact* pc);
// 修改
void modi(struct Contact* pc);
// 查询
void search(struct Contact* pc);
// 以名字排序
//void SortByName(struct Contact* pc);

//销毁 通讯录
void* Destroy(struct Contact* pc);