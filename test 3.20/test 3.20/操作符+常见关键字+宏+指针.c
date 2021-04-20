//#include<stdio.h>
//int main()
//{
//	//字符串的结束标志是'\0'
//	//'\0'--转义字符--0;
//	//0-代表数字0；
//	//'0'代表字符0，其ASIIC值为48；
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int arr[n]= { 0,1,2,3,4,5,6,7,8,9 };//数字中括号内的量必须为常量。
//	return 0;
//}
//#include<stdio.h>
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int MAX;
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个整数\n");
//	scanf_s("%d%d\n", & num1, & num2);
//	MAX = max(num1, num2);
//	printf("max=%d\n", MAX);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，再++；
//	int c = ++a;//前置++，先++，再使用；
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//括号为强制转化符。
//	return 0;
//}//!=表示不等于。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a && b;//C语言中进行逻辑计算时，非0为1，0为0。
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}
//条件操作符exp1?exp2:exp3;
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*max = (a > b ? a : b);*/
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//	return 0;
//}
//逗号表达式
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//下标引用操作符。
//	return 0;
//}
//#include<stdio.>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("c=%d\n", c);//括号为函数调用操作符。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	register int a = 10;其中register是建议把a定义为寄存器变量。
//	return 0;
//}
//int等价于signed int。
//typedef-类型定义-类型重定义
// #include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num1 = 20;
//	printf("num=%d,num1=%d", num, num1);
//	return 0;
//}
//static修饰局部变量
//局部变量的生命周期边长了。
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//a为一个静态的局部变量了。
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static修饰全局变量
//static改变了作用域-让静态的全局变量只能自己所在的源文件内部使用，出了源文件就没法使用了。
//#include<stdio.h>
//int main()
//{
//	extern int l;
//	printf("l=%d\n", l);
//	return 0;
//}
//static修饰函数。
//也是改变了函数的作用域。
//#include<stdio.h>
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define定义标识符常量。
//#include<stdio.h>
//#define max 100
//int main()
//{
//	int a = max;
//	printf("a=%d\n", a);
//	return;
//}
//#define定义宏
//利用函数的方式实现两个数大小的比较。
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//利用宏的方式实现大小比较
//#include<stdio.h>
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 22;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a; /* 取地址*/
//	//有一种变量是用来存放地址的--指针变量
//	*p = 20;//*-解引用操作符。
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 'd';
//	printf("%p\n", &ch);
//	char* ep = &ch;
//	*ep = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(ep));
//	return 0;
//}
//#include<stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}
#include<stdio.h>
void test()
{
	static int a = 1;//a为一个静态的局部变量了。
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}