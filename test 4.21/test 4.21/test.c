//#include <stdio.h>
//int main()
//{
//	char a = -1;//a=1000 0001(原)-1111 1111(补)
//	signed char b = -1;//b= 1000 0001(原)-1111 1111(补)
//	unsigned char c = -1;//c= 1000 0001(原)-1111 1111(补),且c为无符号字符型。
//	printf("a=%d,b=%d,c=%d", a, b, c);//c=-1,b=-1,c=255.
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;//a=1000 0000(原)-1000 0000(补)
//	printf("%u\n", a);//由于打印为无符号整型，所以要进行整型提升，而a为有符号字符型，当提升为整形时为1111 1111 1111 1111 1111 1111 1000 1000
//	return 0;//所以打印出来为1111 1111 1111 1111 1111 1111 1000 1000所对应的十进制。
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128;//a=128，为溢出了。a=127+1;则a=1000 0000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = -20;//i=1000 0000 0000 0000 0000 0000 0001 0100(原)-1111 1111 1111 1111 1111 1111 1110 1100(补)
//	unsigned int j= 10;//j=0000 0000 0000 0000 0000 0000 0000 1010(原、补)
//	printf("%d\n", i + j);//i+j=1111 1111 1111 1111 1111 1111 1111 0110(补)=10;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//由于i为无符号整型，因此当i减到-1时，其补码为1111 1111 1111 1111 1111 1111 1111 1111，
//	}//而输出为无符号整型，所以输出的为一个超大的数，然后进入死循环。
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//a的值为-1，-2，。。。-128，127，126。。。3，2，1，0。。。。
//	}
//	printf("%d", strlen(a));//而strlen统计字符串长度，当遇到\0(0)则停止。因此输出为255.
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//i为无符号整形，则i的范围为0-255，当i++是，a又变为了0.因此该程序为一个死循环。
//	}
//	return 0;
//}
//
//#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr为指针，32位机器为4个字节，所以结果为1.
//	printf("sz=%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int a = sizeof(arr) / sizeof(arr[0]);//sieof(arr)为数组的字节长度，为4*10=40，所以a的结果为10.
//	printf("a=%d\n", a);
//	test(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1= "abcdef";
//	char *p2= "abcdef";
//	if (p1 == p2)
//{
//	printf("hehe\n");
//}
//else
//{
//	printf("haha\n");
//}
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	printf("%c\n", *arr);
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//指针数组-是数组。用来存放指针
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[10] = { 0 };//字符数组
//	int* ptr[10];//整形指针的数组，存放整形指针的数组
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p\n", &arr[i]);
//		printf("%p\n", arr[i]);
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* ptr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(ptr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针-指针
//int main()
//{
//	int* p= NULL;//整形指针：指向整形的指针-可以存放整形的地址
//	char* ch= NULL;//字符指针：指向字符的指针-可以存放字符的地址
//	//数组指针：指向数组的指针-存放数组的地址。
//	int arr[10] = { 0 };
//	//arr-首元素的地址
//	//&arr[0]-首元素的地址
//	//&arr-数组的地址。
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr1;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	int (*pa)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//(*pa)相当于拿到了arr整个数组的内容（其实就相当于数组名）
//	}
//	printf("\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//	}
//	printf("\n");
//	return 0;
//}

//打印一个二维数组
//#include<stdio.h>
//void print1(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//}
//void print2(int(*p)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//void print3(int(*p)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//void print4(int(*p)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}
//void print5(int(*p)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	print1(arr, 3, 4);
//	print2(arr, 3, 4);
//	print3(arr, 3, 4);
//	print4(arr, 3, 4);
//	print5(arr, 3, 4);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr+i));
//	}
//	return 0;
//}
