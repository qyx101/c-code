//使用qsort 排序结构体

#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <stdio.h>

struct Stu
{
	char name[20];
    int age;
};

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


int main()
{
	struct Stu s[3] = { {"c",20}, {"b",30}, {"a",25} };
	int sz = sizeof(s) / sizeof(s[0]);

	//按照学生的年龄来排序
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    
	//按照名字排序
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    
    // 注:
    /* s,数组首元素地址, 
       sz,数组个数,
       sizeof(s[0]), 数组每个元素的大小
       cmp_stu_by_name, 函数指针, 用于比较
    */
}