#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};
//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放1000个信息
	int size;//记录当前已经有的元素。
};
//申明函数
//初始化函数
void InitContact(struct Contact* ps);

//添加函数
void AddContact(struct Contact* ps);

//显示函数
void ShowContact(const struct Contact* ps);

//删除函数
void DelContact(struct Contact* ps);

//查找函数
void SearchContact(const struct Contact* ps);

//修改函数
void ModifyContact(struct Contact* ps);

//排序函数
void SortContact(struct Contact* ps);