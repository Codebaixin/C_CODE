//#define _CRT_SECURE_NO_WARNINGS 1//对于scanf输入函数，当在主程序中直接使用时，在起始处要进行申明，或者在主程序中输入scanf_s来代替scanf。加在源文件的第一行。
//#include<stdio.h>
//int main()
//{
//	int num1;
//	int num2;
//	int num;
//	scanf_s("%d%d", &num1, &num2);
//	num = num1 + num2;
//	printf("num=%d\n", num);
//	return 0;
//}scanf是C语言提供的，scanf_s不是标准C语言提供的，是VS编译器提供的。（因此scanf_s不可跨平台使用。）
//放在main函数里的变量都是局部变量，但局部变量不都是放在卖main函数里面。放在大括号里的变量都是局部变量。
//#include<stdio.h>
//int main()
//{
//	//const-常属性
//	//const修饰的常变量
//	const int num = 4;//const修饰的常变量num
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//3;//字面常量
//	//3.14;//字面常量
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };//此时arr[]只能放常量，不能直接放n，并且在int n前面加上const也不行。
//	return 0;
//}
//const int n = 10;n是变量，但是又有常量的属性，所以我们说n是常变量
//#define 定义的标识符常量。
//#include<stdio.h>
//#define max 10//最终max是一个常量。
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}
//枚举常量-一一列举出来
//如三原色：红、黄、蓝
//枚举关键-enum
//#include<stdio.h>
//enum sex
//{
//	male,
//	female,
//	secret
//};
////male female secret-枚举常量
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	printf("%d\n", s);
//	return 0;
//}
//#include<stdio.h>
//enum color
//{
//	red,
//	yellow,
//	blue
//};
//int main()
//{
//	enum color a = blue;
//	printf("%d\n", a);
//	return 0;
//}
//常量：字面常量，枚举常量，const修饰的常变量，define定义的标识符常量。
//{
//	enum color b = yellow;
//	b = blue;
//	//blue = 6;枚举常量是不能改的，但是主函数内的枚举类型所创建出来的变量是可以改的。
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr0[] = "abc";//数组"abc"='a','b','c','\0'---'\0'字符串的结束标志。而'\0'=0;
//	char arr1[] = { 'a','b','c','\0'};//所以此时放0与放'\0'一样。
//	char arr2[] = { 97,98,99,'\0' };
//	printf("%s\n", arr0);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
////\0是计算字符串长度时的标志，不算作字符串内容。
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	char arr3[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//结果为3；
//	printf("%d\n", strlen(arr2));//结果为随机值。
//	printf("%d\n", strlen(arr3));//结果为3。
//	return 0;
//}
//转义字符：转变原来的意思。
//#include<stdio.h>
//int main()
//{
//	printf("abc");
//	printf("abcn");
//	printf("abc\n");//\n为换行。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("c:\test\32\test.c");//\t为水平制表符。
//	printf("c:\\test\\32\\test.c");//\\用于表示一个反斜杠，防止它被解释为一个转义序列符。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("(are you ok\?\?)\n");
//	printf("(are you ok??)\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');//\'用于表示字符常量
//	printf("%s\n", "\"");//\"用于表示一个字符串内部的双引号
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",strlen ("c:\test\32\test.c"));
//	\32--32是2个8进制数字
//	32作为8进制代表的那个十进制数字，作为ASCII码值对应的字符。
//	32--10进制26--16进制1AH--1AH所对应的ASCII字符。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\32');//\32--32是2个8进制数字,作为ASCII码值对应的字符。
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\382\test.c"));
//	return 0;
//}
/*#include<stdio.h>
int main()
{
	printf("%c\n", '\x61');
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input;
	printf("加入比特\n");
	printf("你要好好学习吗?(1/0)>:");
	scanf("%d\n", &input);
	if (input == 1)
		printf("得到好offer\n");
	else
		printf("卖红薯\n");
	return 0;
}*/
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 2000)
//	{
//		printf("敲一行代码\n");
//		line++;
//	}
//	printf("好offer\n");
//	printf("%d\n", line);
//	return 0;
//}
//函数
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int sum1;
//int main()
//{
//	/*int num1 = 10;
//	int num2 = 20;*/
//	sum1 = add(1, 20);
//	printf("%d\n", sum1);
//	return 0;
//}
//自定义函数：自己创造的函数。
//#include<stdio.h.>
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存10个整形数字的数组。
//	int i = 0;
//	while(i<=9)
//	{
//		printf("%d\n",arr[i]);
//	i++;
//	}
//	//printf("%d\n", arr[6]);//下标的形式访问元素。
//	//char ch[5];
//	//float cs[10];
//
//	return 0;
//}
//移位操作
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b= a << 2;//移位操作是对二进制进行操作。
//	printf("%d\n", b);//a左移之后a的值保持不变
//	printf("%d\n", a);
//	return 0;
//}
//位操作
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = a & b;
//	printf("%d", c);
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值，==判断是否相等
//	a = a + 10;//等价于a+=10;
//	a = a - 20;//等价于a-=10;
//	a = a & 2;//等价于a&=2;
//	//复合赋值符
//	/*单目操作符
//	双目操作符
//	三目操作符*/
//	//C语言中0为假，非0均为真。
#include<stdio.h>
	int main()
	{
		int a = 10;
		int arr[10] = { 0 };
		//计算数组元素的个数=数组大小除以每个元素的大小
		int sz = 0;
		sz = sizeof(arr) / sizeof(arr[0]);
		printf("sz=%d\n",sz);
		printf("%d\n", sizeof(arr));//sizeof(int)*4=40
		printf("%d\n", sizeof(a));
		printf("%d\n", sizeof(int));
		printf("%d\n", sizeof a);
		//sizeof计算的变量/类型所占空间的大小。当括号内是变量时其括号可以省略，如果是类型，则不能省略。
		return 0;
	}