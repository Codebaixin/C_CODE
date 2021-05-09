#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//enum Option
//{
//	exit,
//	add,
//	del,
//	search,
//	modify,
//	show,
//	sort
//};
//ͨѶ¼����
typedef struct Contact
{
	struct PeoInfo* data;//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ء�
	int capacity;//��ǰͨѶ¼���������
}Contact;
//��������
//��ʼ������
void InitContact(struct Contact* ps);

//��Ӻ���
void AddContact(struct Contact* ps);

//��ʾ����
void ShowContact(const struct Contact* ps);

//ɾ������
void DelContact(struct Contact* ps);

//���Һ���
void SearchContact(const struct Contact* ps);

//�޸ĺ���
void ModifyContact(struct Contact* ps);

//������
void SortContact(struct Contact* ps);

void DestoryContact(Contact* ps);