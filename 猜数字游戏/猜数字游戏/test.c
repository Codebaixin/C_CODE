#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	//1.生成随机数
	int ret = 0;
	ret = rand()%100+1;//随机生成0-100之间的数字。
	//printf("%d\n", ret);
	//2.猜数字
	int guess = 0;
	while(1)
	{
		printf("请输入你选择的数字:>");
	    scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
menu()
{
	printf("*************************\n");
	printf("**** 1.play   0.exit ****\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//显示菜单栏
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}