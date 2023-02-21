#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable : 4996)
#define MAX_NAME 20
#define SEX_NAME 10
#define TELE_NAME 20
#define ADDR_NAME 20
#define MAX_INFO 5
#define DEFAULT_SZ 3
#define INC_SZ 2
//声明人信息结构
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[SEX_NAME];
	char tele[TELE_NAME];
	char addr[ADDR_NAME];
};

//静态 声明通讯录结构
//struct  Contact
//{
//	struct PeoInfo info[MAX_INFO];
//	int sz;
//};

// 动态声明
struct Contact
{
	struct PeoInfo* info;
	int capacity; // 最大容量
	int sz;	// 个数
};



void Init(struct Contact* pc);
void Add(struct Contact* pc);
void show(struct Contact* pc);
void sub(struct Contact* pc);
void modify(struct Contact* pc);
void destroy(struct Contact* pc);
void sort_by_name(struct Contact* pc);