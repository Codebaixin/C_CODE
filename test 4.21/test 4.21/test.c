//#include <stdio.h>
//int main()
//{
//	char a = -1;//a=1000 0001(ԭ)-1111 1111(��)
//	signed char b = -1;//b= 1000 0001(ԭ)-1111 1111(��)
//	unsigned char c = -1;//c= 1000 0001(ԭ)-1111 1111(��),��cΪ�޷����ַ��͡�
//	printf("a=%d,b=%d,c=%d", a, b, c);//c=-1,b=-1,c=255.
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;//a=1000 0000(ԭ)-1000 0000(��)
//	printf("%u\n", a);//���ڴ�ӡΪ�޷������ͣ�����Ҫ����������������aΪ�з����ַ��ͣ�������Ϊ����ʱΪ1111 1111 1111 1111 1111 1111 1000 1000
//	return 0;//���Դ�ӡ����Ϊ1111 1111 1111 1111 1111 1111 1000 1000����Ӧ��ʮ���ơ�
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128;//a=128��Ϊ����ˡ�a=127+1;��a=1000 0000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = -20;//i=1000 0000 0000 0000 0000 0000 0001 0100(ԭ)-1111 1111 1111 1111 1111 1111 1110 1100(��)
//	unsigned int j= 10;//j=0000 0000 0000 0000 0000 0000 0000 1010(ԭ����)
//	printf("%d\n", i + j);//i+j=1111 1111 1111 1111 1111 1111 1111 0110(��)=10;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//����iΪ�޷������ͣ���˵�i����-1ʱ���䲹��Ϊ1111 1111 1111 1111 1111 1111 1111 1111��
//	}//�����Ϊ�޷������ͣ����������Ϊһ�����������Ȼ�������ѭ����
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//a��ֵΪ-1��-2��������-128��127��126������3��2��1��0��������
//	}
//	printf("%d", strlen(a));//��strlenͳ���ַ������ȣ�������\0(0)��ֹͣ��������Ϊ255.
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//iΪ�޷������Σ���i�ķ�ΧΪ0-255����i++�ǣ�a�ֱ�Ϊ��0.��˸ó���Ϊһ����ѭ����
//	}
//	return 0;
//}
//
//#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//arrΪָ�룬32λ����Ϊ4���ֽڣ����Խ��Ϊ1.
//	printf("sz=%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int a = sizeof(arr) / sizeof(arr[0]);//sieof(arr)Ϊ������ֽڳ��ȣ�Ϊ4*10=40������a�Ľ��Ϊ10.
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

//ָ������-�����顣�������ָ��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[10] = { 0 };//�ַ�����
//	int* ptr[10];//����ָ������飬�������ָ�������
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

//����ָ��-ָ��
//int main()
//{
//	int* p= NULL;//����ָ�룺ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	char* ch= NULL;//�ַ�ָ�룺ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	//����ָ�룺ָ�������ָ��-�������ĵ�ַ��
//	int arr[10] = { 0 };
//	//arr-��Ԫ�صĵ�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ��
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
//		printf("%d ", (*pa)[i]);//(*pa)�൱���õ���arr������������ݣ���ʵ���൱����������
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

//��ӡһ����ά����
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
