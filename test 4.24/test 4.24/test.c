//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr1[100] = { 0 };
//    int arr2[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    while (j < m && k < n)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            printf("%d ", arr1[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d ", arr2[k]);
//            k++;
//        }
//    }
//    if (j == m)
//    {
//        for (; k < n; k++)
//        {
//            printf("%d ", arr2[k]);
//        }
//    }
//    else
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr1[j]);
//        }
//    }
//    return 0;
//}

//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//#include<stdio.h>
//int main()
//{
//    //输入
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[5000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //处理。
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j <= n - 1; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                int k = 0;
//                for (k = j; k <= n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    int l = 0;
//    for (l = 0; l < n; l++)
//    {
//        printf("%d ", arr[l]);
//    }
//    return 0;
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    //输入
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int l = 0;
//    scanf("%d", &l);
//    //分析处理
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == l)
//        {
//            int j = 0;
//            for (j = i; j < n; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            i--;
//            count++;
//        }
//    }
//    for (i = 0; i < n - count; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//当函数的形参部分为一个二级指针时。其实参可能为以下情况。
//void test(int** p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//	return 0;
//}

//当函数的形参部分为一个一级指针时。其实参可能为以下情况。
//void test1(int* p)
//{
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	return 0;
//}

//数组指针—指向数组的指针。
//函数指针—指向函数的指针—存放函数地址。
//#include<stdio.h>
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
//	printf("%d\n", add(a, b));
//	printf("%p\n", &add);
//	printf("%p\n", add);
//
//	int (*p)(int,int) = add;
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//	//&函数名和函数名都是函数的地址
//}

void Print(char* str)
{
	printf("%s\n", str);
}
#include<stdio.h>
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello bit");
	return 0;
}