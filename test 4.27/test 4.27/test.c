//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�-16
//	printf("%d\n", sizeof(a+0));//4/8-�������������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));//4-��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof��*a)����4
//	printf("%d\n", sizeof(a+1));//4/8-�������������ʾ��Ԫ�ص�ַ��a+1���ǵ�2��Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));//4-�ڶ���Ԫ�صĴ�С��
//	printf("%d\n", sizeof(&a));//4/8-&aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));//16-&aȡ����������ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С
//	printf("%d\n", sizeof(&a+1));//4/8-&aȡ����������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8�ֽ�
//	printf("%d\n", sizeof(&a[0]));//4/8-&a[0]��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0]+1));//4/8-&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//}

//#include<stdio.h>
//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%d\n", sizeof(arr));//sizeof�����������Ĵ�С��6*1=6
//    printf("%d\n", sizeof(arr + 0));//4/8-arr����Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ������Ϊ4/8
//    printf("%d\n", sizeof(arr[1]));//1
//    printf("%d\n", sizeof(*arr));//1-*arr������Ԫ�أ���Ԫ�����ַ�����1���ֽ�
//    printf("%d\n", sizeof(&arr));//&arr���������ַ�������ǵ�ַ����ַ��С4/8�ֽ�
//    printf("%d\n", sizeof(&arr + 1));//&arr+1���������������ĵ�ַ�������ǵ�ַ����ַ��С4/8�ֽ�
//    printf("%d\n", sizeof(&arr[0] + 1));//4/8-�ڶ���Ԫ�صĵ�ַ
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };//strlen�����ַ������ȣ��ӵ�ǰ��ַ��ʼ���ҵ�\0Ϊֹ��
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr+0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//���ֵ
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6  &arr-����ĵ�ַ-����ָ��char��*p��[7]=&arr;
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//5
//
//
//	printf("%d\n", sizeof(arr));//7-sizeof(arr)�����������Ĵ�С����λ���ֽڡ�
//	printf("%d\n", sizeof(arr + 0));//4/8-������ǵ�ַ�Ĵ�С-arr+0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1-*arr����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1]));//1-arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));//4/8-&arr��Ȼ������ĵ�ַ������ַ�Ĵ�С����4/8�ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8-&arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8-&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8-����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//4/8-p+1�õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1-*p�����ַ����ĵ�һ���ַ�-��a'��
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1);//4/8
// 
// printf("%d\n",strlen(p));//6
// printf("%d\n",strlen(p+1));//5
// printf("%d\n",strlen(*p));//err
// printf("%d\n",strlen(p[0]));err
// printf("%d\n",strlen(&p));//���ֵ
// printf("%d\n",strlen(&p+1));//���ֵ
// printf("%d\n",strlen(&p[0]+1));//5
//}

//#include<stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16-a[0]�൱�ڵ�һ����Ϊһά�������������
//	//sizeof(arr[0]))�ǰ���������������sizeof�����ڣ�������ǵ�һ�еĴ�С��
//
//	printf("%d\n", sizeof(a[0]+1));//4-a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ��a[0]��ʵ�ǵ�1�е�һ��Ԫ�صĵ�ַ
//	//����a[0]+1���ǵ�1�еڶ���Ԫ�صĵ�ַ-��ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0]+1)));//4-*(a[0]+1)�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a+1));//4-a�Ƕ�ά������������û��sieof��a����Ҳû��&��a��������a����Ԫ�ص�ַ
//	//���Ѷ�λ���鿴��һά����ʱ����ά�������Ԫ�ؾ������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ��
//
//	printf("%d\n", sizeof(*(a+1)));//16-sizeof(a[1])����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0]+1));//4���ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0]+1)));//16-����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));//a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a���ǵ�һ�У�sieof��*a�����Ǽ����һ�еĴ�С
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
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

//��һ���ַ��������������
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

//������
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

//���㵱����Ϊa+aa+aaa+aaaa�������������㡣
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

//������
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

//�ж�1-10000֮���ж���ˮ�ɻ�������ˮ�ɻ�������153=1^3+5^3+3^3;��
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//1.�ж�Ϊ��λ����
//		int n = 0;
//		int temp = i;
//		int sum = 0;
//		do
//		{
//			n++;
//			temp = temp / 10;
//		} while (temp);
//		//����ֵ��
//		temp = i;
//		while (temp)
//		{
//			sum = sum + pow(temp % 10, n);
//			temp = temp / 10;
//		}
//		//�ж�
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