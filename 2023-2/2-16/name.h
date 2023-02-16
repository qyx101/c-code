#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 13
#define MAX_ADDR 20
#define INIT 3
#define INC_SZ 2


// 人信息结构
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


// 静态通讯录结构
//struct Contact
//{
//	struct PeoInfo info;
//	int sz;
//};
struct Contact
{
	struct PeoInfo* info; 
	int capacity; //容量
	int sz	//记录个数
};

// 静态初始化
void InitContact(struct Contact* pc);
// 增加
void Add(struct Contact* pc);
// 显示
void Show(struct Contact* pc);
// 删除
void Del(struct Contact* pc);
// 修改
void Modify(struct Contact* pc);
void Search(struct Contact* pc);

