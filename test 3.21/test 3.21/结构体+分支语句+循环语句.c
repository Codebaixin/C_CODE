//#include<stdio.h>
//int main()
//{
//	double c = 5.35;
//	double* o = &c;
//	*o = 2.45;
//	printf("c=%lf\n", c);
//	printf("c=%lf\n", *o);
//	printf("%d\n", sizeof(o));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
//结构体--用来描述复杂对象--我们自己创造出来的类型。
//创造一个结构体。
//struct Book
//{
//	char name[20];
//	int price;
//};
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	//利用pb打印出我的书名和价格；
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);//->    结构体指针->成员
//	printf("书名：%s\n", b1.name) ;
//	printf("价格：%d\n", b1.price);//.   结构体变量.成员
//	b1.price = 15;//更改价格。
//	//strcpy(b1.name, "C++");更改名字，由于名字为数组，因此要用到strcpy函数。
//	//printf("%s\n", b1.name);
//	printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}
//C语言中一个分号代表一条语句。
//分支结构
//单分支结构
//#include<stdio.h>
//int main()
//{
//	int age = 5;
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}
//两分支结构
//#include<stdio.h>
//int main()
//{
//	int age = 30;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}
//多分枝结构
//#include<stdio.h>
//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age < 60)
//		printf("中年\n");
//	else
//		printf("老年\n");
//	return 0;
//}
//如果条件成立要执行多条语句，要用大括号将代码块括起来。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else与最近的未匹配的if相匹配。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");//此时else只能与括号外面的if相匹配。
//	return 0;
//}
// if语句的用法。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：");
//	scanf("%d\n", &a);
//	int c = a % 2;
//	if (c == 1)
//		printf("%d为奇数", a);
//	else
//		printf("%d为偶数", a);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("0-100间的奇数为："); 
//	while (a <= 100)
//	{
//		int c = a % 2;
//		if (c == 1)
//			printf("%d,", a);//或者else后面给一条空语句，即;
//		a++;
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//switch语句用法
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	if (day == 1)
//		printf("星期一\n");
//	else if (day = 2)
//		printf("星期二\n");
//	...
//	else if (day = 6)
//		printf("星期六\n");
//	else if (day = 7)
//		printf("星期七\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int day;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:printf("星期一\n");
//		break;
//	case 2:printf("星期二\n");
//		break;
//	case 3:printf("星期三\n");
//		break;
//	case 4:printf("星期四\n");
//		break;
//	case 5:printf("星期五\n");
//		break;
//	case 6:printf("星期六\n");
//		break;
//	case 7:printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//switch语句适合于多分枝语句。其中switch内的变量类型必须为整形。
//擦色表达式必须是常量。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int day;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");//default用来处理数据范围之外的数据。
//	}
//	return 0;
//}
//在屏幕上依次打印出1-10。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<11)
//	{
//		/*if (5 == i)
//			break;*/
//		printf("%d ", i);//当在循环体中遇到break时，循环到此结束。
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);//continue终止循环中本次循环，不再执行后面代码，直接跳转到循环的判断部分，判断环是否继续进行。
//	}
//}
#include<stdio.h>
int main()
{
	int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;
}