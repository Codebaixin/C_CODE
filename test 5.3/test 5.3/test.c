//位段—二进制位-就是用来节省空间的
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit-6个字节*8=48bit;
//#include<stdio.h>
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节。
//	return 0;
//}

//struct S 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//#include<stdio.h>
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节。
//	return 0;
//}

//枚举类型
//#include<stdio.h>
//enum sex
//{
//	//枚举可能的取值—常量
//	male,//0
//	female,//1
//	secret//2
//};//枚举的赋值放在enum以内。
//int main()
//{
//	//enum sex s = secret;
//	//s = female;
//	//enum sex s=2;//该句为错误语法，无法从int转化为枚举类型。
//	printf("%d %d %d\n", male, female, secret);
// printf("%d\n",sizeof(s));//结果为一个整形变量的字节大小。
//	return 0;
//}

//联合-联合体-共用体-公用同一块空间
//#include<stdio.h>
//union Un
//{
//	char c;
//	int a;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//结果为4，
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.a));
//}

//判断内存的存储方式
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//方法二
//#include<stdio.h>
//union U
//{
//	int i;
//	char c;
//}u;
//int main()
//{
//	u.i = 1;
//	if (u.c == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

#include<stdio.h>
struct S3
{
	double d;
	char c;
	int i;
};
int main()
{
	struct S3 s;
	printf("%d\n", sizeof(s));
	return 0;
}

