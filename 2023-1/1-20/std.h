#include <string.h>
#define _CRT_SECURE_NO_DEPRECATE

#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12

// 人的信息
struct Peo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
};

// 通讯录中的信息
struct Peo_ed
{
	struct Peo data[MAX]; // 人的信息
	int sz;		//当前存放的个数
};

// 初始化
void init_con(struct Peo_ed* pc);

// 增加
void add_contact(struct Peo_ed* pa);

// 删除
void del_contact(struct Peo_ed* pc);

// 查看
void show_contact(struct Peo_ed* pc);

// 修改通讯录
void modi_contact(struct Peo_ed* pc);

// 查找
void search_contact(struct Peo_ed* pc);