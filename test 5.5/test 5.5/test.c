//动态内存管理
//malloc
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));//p为开辟空间的首地址。
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//使用后，进行归还
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//int* p = (int*)malloc(4 * sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//}

//realloc
//调整动态开辟内存空间的大小
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//		if (p == NULL)
//		{
//			printf("%s\n", strerror(errno));
//		}
//		else
//		{
//			int i = 0;
//			for (i = 0; i < 5; i++)
//			{
//				*(p + i) = i;
//			}
//		}
	//就是在使用malloc开辟的20个字节空间。
	//假设20个不够用，需要40个字节空间，则需使用realloc。
    //realloc使用注意事项：
	//1.如果p指向的空间之后有足够的内存空间可以进行追加，则直接追加，后返回p。
	//2.如果p指向的空间之后没有足够的内存空间可以进行追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
	//最后返回新开辟的内存空间地址。
	//3.得用一个新的变量来接受realloc函数的返回值。

//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//void Getmemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str =NULL;
//	Getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////出现两个问题：1.远程代码程序会出现崩溃现象。2.程序存在内存泄露情况
//int main()
//{
//	test();
//	return 0;
}
//修改方法一
//#include<stdio.h>
//#include<stdlib.h>
//void Getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	Getmemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//修改方法二
//#include<stdio.h>
//char* Getmemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str =NULL;
//	str=Getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<stdio.h>
char* GetMemory(void) 
{
	//static char p[] = "hello world";静态区
	char p[] = "hello world";//栈区
	return p;
}
void Test(void) {
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}