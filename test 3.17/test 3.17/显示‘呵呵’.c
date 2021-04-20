//#include<stdio.h>
//int main()//main函数前的int表示main函数调用后返回一个整型值。
//{
//	printf("hello world\n");//主函数-程序的入口，有且仅有一个。按照顺序结构执行。
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;//返回 0
	//库函数—C语言本身提供给我们使用的函数。
	//使用别人的东西要提前给人打招呼。因此主函数中使用到的函数要进行申明，即最开始的代码#include<stdio.h>。
//}printf为打印函数。
//#include<stdio.h>
//int main()
//{
	//char ch='A';//申请了一个存贮空间存储形式是字符型，存储地方的名字为ch，存储的内容为字符A
	//printf("%c\n", ch);//printf("----")直接打印双引号里的内容。prinft("%c\n", ch)将ch的内容以字符形式打印出来。
	//printf("%d\n", ch);//%c--打印字符格式的数据。%d整形十进制数
	//float f = 5.0;
	//printf("%f\n", f);
	//double f = 3.14;
	//printf("%lf\n", f);
	//return 0;
	//int---整形
	//short int---短整形
	//long---长整形
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}变量定义的方式是：类型名+变量名+变量值。
//#include<stdio.h>
//int num2 = 20;//全局变量：定义在代码块外部
//int main()
//{
//	int num1 = 10;//局部变量：定义在代码块内部
//	return 0;
//}
//#include<stdio.h>
//int glob = 2018;
//int main()
//{
//	int glob = 2020;//局部变量和全局变量的名字建议不要相同。容易误会，产生bug。
//	printf("%d\n", glob);//当局部变量和全局变量名字相同时，局部变量优先。
//	return 0;
//}
//#include<stdio.h>
//int a = 30;
//int main()
//{
//	//int a = 20;
//	{
//		int a = 10;
//		//printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}
#include<stdio.h>
int main()
{//声明extern外部符号的
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
//局部变量的作用域是变量所在的局部范围。
//全局变量的作用域是整个工程。
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//全局变量的生命周期是：整个程序的生命周期。