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
	//创建通讯录
	struct Contact con;//con是通讯录，里面包含1000个元素信息和size；
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
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
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入:\n");
			break;

		}
	} while(input);
	return 0;
}