#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "contact.h"
#include<string.h>
menu()
{
	printf("*****  1.add          2.del  *****\n");
	printf("***** 3.search       4.modify*****\n");
	printf("*****  5.show         6.sort *****\n");
	printf("**************  0.exit ***********\n");
	printf("**********************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con��ͨѶ¼���������1000��Ԫ����Ϣ��size��
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			SortContact(&con);
			break;
		case exit:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������:\n");
			break;

		}
	} while(input);
	return 0;
}