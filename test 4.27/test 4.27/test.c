//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节-16
//	printf("%d\n", sizeof(a+0));//4/8-数组名在这儿表示首元素地址，a+0还是首元素地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//4-数组名表示首元素地址，*a就是首元素，sizeof（*a)就是4
//	printf("%d\n", sizeof(a+1));//4/8-数组名在这儿表示首元素地址，a+1还是第2个元素地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(a[1]));//4-第二个元素的大小。
//	printf("%d\n", sizeof(&a));//4/8-&a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));//16-&a取出的是数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小
//	printf("%d\n", sizeof(&a+1));//4/8-&a取出的是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8字节
//	printf("%d\n", sizeof(&a[0]));//4/8-&a[0]是一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8-&a[0]+1是第二个元素的地址
//}

//#include<stdio.h>
//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%d\n", sizeof(arr));//sizeof计算的是数组的大小，6*1=6
//    printf("%d\n", sizeof(arr + 0));//4/8-arr是首元素地址，arr+0还是首元素地址，所以为4/8
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(*arr));//1-*arr就是首元素，首元素是字符就是1个字节
//    printf("%d\n", sizeof(&arr));//&arr随是数组地址，但还是地址，地址大小4/8字节
//    printf("%d\n", sizeof(&arr + 1));//&arr+1是跳过整个数组后的地址，但还是地址，地址大小4/8字节
//    printf("%d\n", sizeof(&arr[0] + 1));//4/8-第二个元素的地址
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//strlen计算字符串长度，从当前地址开始，找到\0为止。
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr+0));//随机值
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//随机值
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6  &arr-数组的地址-数组指针char（*p）[7]=&arr;
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//5
//
//
//	printf("%d\n", sizeof(arr));//7-sizeof(arr)计算的是数组的大小，单位是字节。
//	printf("%d\n", sizeof(arr + 0));//4/8-计算的是地址的大小-arr+0是首元素的地址
//	printf("%d\n", sizeof(*arr));//1-*arr是首元素，sizeof(*arr)计算首元素的大小
//	printf("%d\n", sizeof(arr[1]));//1-arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));//4/8-&arr虽然是数组的地址，但地址的大小都是4/8字节
//	printf("%d\n", sizeof(&arr + 1));//4/8-&arr+1跳过是整个数组后的地址，但也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8-&arr[0] + 1是第二个元素的地址
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8-计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//4/8-p+1得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1-*p就是字符串的第一个字符-‘a'；
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1);//4/8
// 
// printf("%d\n",strlen(p));//6
// printf("%d\n",strlen(p+1));//5
// printf("%d\n",strlen(*p));//err
// printf("%d\n",strlen(p[0]));err
// printf("%d\n",strlen(&p));//随机值
// printf("%d\n",strlen(&p+1));//随机值
// printf("%d\n",strlen(&p[0]+1));//5
//}

//#include<stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16-a[0]相当于第一行作为一维数组的数组名，
//	//sizeof(arr[0]))是把数组名单独放在sizeof（）内，计算的是第一行的大小。
//
//	printf("%d\n", sizeof(a[0]+1));//4-a[0]是第一行的数组名，数组名此时是首元素地址，a[0]其实是第1行第一个元素的地址
//	//所以a[0]+1就是第1行第二个元素的地址-地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0]+1)));//4-*(a[0]+1)是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a+1));//4-a是二维数组数组名，没有sieof（a），也没有&（a），所以a是首元素地址
//	//而把二位数组看成一维数组时，二维数组的首元素就是他的第一行，a就是第一行（首元素）的地址
//	//a+1就是第二行的地址。
//
//	printf("%d\n", sizeof(*(a+1)));//16-sizeof(a[1])计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0]+1));//4，第二行的地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16-计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//a是首元素地址-第一行的地址，*a就是第一行，sieof（*a）就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16

//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n", *cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//    return 0;
//}

//将一个字符串内容逆序输出
//#include<stdio.h>
//void Change(char* p, int sz)
//{
//	int lift = 0;
//	int right = sz - 1;
//	while (lift < right)
//	{
//		char t = *(p + lift);
//		*(p + lift) = *(p + right);
//		*(p + right) = t;
//		lift++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	Change(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//方法二
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reserve(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char t = *(left);
//		*(left) = *(right);
//		*(right) = t;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);/*scanf("%s", &arr);*/
//	reserve(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//计算当输入为a+aa+aaa+aaaa。。。这种运算。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum1 = sum1 + a * pow(10,i);
//		sum2 = sum1 + sum2;
//	}
//	printf("%d\n", sum2);
//	return 0;
//}

//方法二
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum2);
//	return 0;
//}

//判断1-10000之间有多少水仙花数。（水仙花数：即153=1^3+5^3+3^3;）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//1.判断为几位数。
//		int n = 0;
//		int temp = i;
//		int sum = 0;
//		do
//		{
//			n++;
//			temp = temp / 10;
//		} while (temp);
//		//计算值。
//		temp = i;
//		while (temp)
//		{
//			sum = sum + pow(temp % 10, n);
//			temp = temp / 10;
//		}
//		//判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-1-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i+ 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}