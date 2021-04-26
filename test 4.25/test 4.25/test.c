//void(* signal(int, void(*)(int) ) )(int);
//等价于typedf void(*pfun_t)(int)==typedf void(*)(int) pfun_t;
//pfun_t signal(int,pfun_d);
//signal是一个函数声明
//signal函数的参数有两个，第一个是int类型，第二个是函数指针，该函数指针指向的参数是int，返回值是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的参数是int，返回值是void。

//函数指针数组-用来存放函数指针的数组
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	int (*pa)(int, int) = add;//sub,mul,div
//	int (*p[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*p[i])(2, 3));
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add   2.sub  **\n");
//	printf("**   3.mul   4.div  **\n");
//	printf("*******  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", add(x,y));
//			break;
//		case 2:
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", sub(x,y));
//			break;
//		case 3:
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", mul(x,y));
//			break;
//		case 4:
//			printf("请输入两个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", div(x,y));
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add   2.sub  **\n");
//	printf("**   3.mul   4.div  **\n");
//	printf("*******  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	int (*fund[5])(int, int) = { 0,add,sub,mul,div };//fund 是一个函数指针数组-转移表。
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:");
//			scanf("%d %d", &x, &y);
//			int ret= fund[input](x, y);//(*fund[input])(x, y)==fund[input](x, y).
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//
//	} while (input);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void clc(int (*ptr)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d",&x, &y);
//	printf("%d\n", (*ptr)(x, y));
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add   2.sub  **\n");
//	printf("**   3.mul   4.div  **\n");
//	printf("*******  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			clc(add);
//			break;
//		case 2:
//			clc(sub);
//			break;
//		case 3:
//			clc(mul);
//			break;
//		case 4:
//			clc(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址，则p为一个数组指针。
//
//	int (*pf)(int, int);//函数指针。
//	int(*(ptr[4]))(int, int);//ptr是一个数组-函数指针数组。
//	//pttr是一个指向函数指针数组的指针。
//	int (*(*pttr)[4])(int, int) = &ptr;
//	//pttr是一个数组指针，指针指向的数组有四个元素。
//	//指向数组的每个元素的类型是一个函数指针int(*)(int,int);
//
//}

//#include<stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test( void (*p)(char*) )
//{
//	printf("test\n");
//	(*p)("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//void test(char** p)
//{
//
//}
//int main()
//{
//    char c = 'b';
//    char* pc = &c;
//    char** ppc = &pc;
//    char* arr[10];
//    test(&pc);
//    test(ppc);
//    test(arr);//Ok
//    return 0;
//}
//
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa[10]) = &arr;
//	//函数指针
//	int (*paa)(int, int) = add;
//	//int sum=paa(1,2);
//	//int sum=(*paa)(1,2);
//	//函数指针数组
//	int (*pbb[5])(int, int);
//	//指向函数指针数组的指针
//	int (*(*pcc)[5])(int, int) = &pbb;
//	return 0;
//}
//void*类型的指针，可以接受任意类型的地址。
//void*类型的指针，不可以进行解引用操作。
//void*类型的指针，不可以进行加减乘除操作。

//利用qosrt函数实现排序
//#include <stdio.h>
//#include<stdlib.h>
////qosrt函数的使用者得实现一个比较函数
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//
//    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
// 第一个参数：待排序数组的首元素的地址
// 第二个参数：待排序数组的元素个数
// 第三个参数：待排序数组的每个元素的大小-单位是字节
// 第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现。
//              函数指针的两个参数是：待比较的两个元素的地址。
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//自写一个程序，对所有类型数据进行冒泡排序
//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        * ((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//            {
//                _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}