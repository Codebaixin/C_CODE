//1-99中含有多少个含9的数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9)|| (i / 10 == 9))
//		{
//			printf("%d ", i);
//			j++;
//		}
//	}
//	printf("\n1-100内含9的个数为：%d\n", j);
//	return 0;
//求1-1/2+1/3-1/4+.....+1/99-1/100的和。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double h = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2==0)
//			h = -1.0 / i;
//		if (i%2==1)
//			h = 1.0 / i;
//		sum = sum + h;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag *1.0/ i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//从屏幕上输入十个整数，找出其中的最大值。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//scanf("%d", arr[i]);
//	int max = arr[0]; 
//	for (j = 0; j <= 9; j++)
//	{
//		if (max < arr[j])
//			max = arr[j];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//乘法口诀表，在屏幕上输出9*9的乘法表。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int integral = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int ass[] = { 1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i <= 8; i++)
//	{
//		for (j = 0; j <= 8; j++)
//		{
//			integral = arr[i] * arr[j];
//			printf("%d*%d=%d\n", arr[i], arr[j], integral);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int integral = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			integral = i * j;
//			printf("%d*%d=%-2d ", i, j, integral);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//写猜数字游戏
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("****1.start 0.exit****\n");
//	printf("**********************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	int in = 0;
//	while (1)
//	{
//		printf("请输入：");
//		scanf("%d", &in);
//		if (ret > in)
//			printf("数太小\n");
//		else if (ret < in)
//			printf("数太大\n");
//		else
//		{
//			printf("恭喜你，找到了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误,请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//goto用法
//#include<stdio.h>
//int main()
//{
//	agin:
//	printf("欢迎加入bit\n");//死循环。
//	goto agin;
//}
//电脑关机程序
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将于1分钟后关机，如果输入：我是猪，就取消关机。\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a"); 
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你的电脑将于1分钟后关机，如果输入：我是猪，就取消关机。\n");
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}