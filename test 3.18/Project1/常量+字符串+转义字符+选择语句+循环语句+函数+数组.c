//#define _CRT_SECURE_NO_WARNINGS 1//����scanf���뺯����������������ֱ��ʹ��ʱ������ʼ��Ҫ����������������������������scanf_s������scanf������Դ�ļ��ĵ�һ�С�
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
//}scanf��C�����ṩ�ģ�scanf_s���Ǳ�׼C�����ṩ�ģ���VS�������ṩ�ġ������scanf_s���ɿ�ƽ̨ʹ�á���
//����main������ı������Ǿֲ����������ֲ����������Ƿ�����main�������档���ڴ�������ı������Ǿֲ�������
//#include<stdio.h>
//int main()
//{
//	//const-������
//	//const���εĳ�����
//	const int num = 4;//const���εĳ�����num
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//3;//���泣��
//	//3.14;//���泣��
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };//��ʱarr[]ֻ�ܷų���������ֱ�ӷ�n��������int nǰ�����constҲ���С�
//	return 0;
//}
//const int n = 10;n�Ǳ������������г��������ԣ���������˵n�ǳ�����
//#define ����ı�ʶ��������
//#include<stdio.h>
//#define max 10//����max��һ��������
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}
//ö�ٳ���-һһ�оٳ���
//����ԭɫ���졢�ơ���
//ö�ٹؼ�-enum
//#include<stdio.h>
//enum sex
//{
//	male,
//	female,
//	secret
//};
////male female secret-ö�ٳ���
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
//���������泣����ö�ٳ�����const���εĳ�������define����ı�ʶ��������
//{
//	enum color b = yellow;
//	b = blue;
//	//blue = 6;ö�ٳ����ǲ��ܸĵģ������������ڵ�ö�����������������ı����ǿ��Ըĵġ�
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr0[] = "abc";//����"abc"='a','b','c','\0'---'\0'�ַ����Ľ�����־����'\0'=0;
//	char arr1[] = { 'a','b','c','\0'};//���Դ�ʱ��0���'\0'һ����
//	char arr2[] = { 97,98,99,'\0' };
//	printf("%s\n", arr0);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
////\0�Ǽ����ַ�������ʱ�ı�־���������ַ������ݡ�
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	char arr3[] = { 'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));//���Ϊ3��
//	printf("%d\n", strlen(arr2));//���Ϊ���ֵ��
//	printf("%d\n", strlen(arr3));//���Ϊ3��
//	return 0;
//}
//ת���ַ���ת��ԭ������˼��
//#include<stdio.h>
//int main()
//{
//	printf("abc");
//	printf("abcn");
//	printf("abc\n");//\nΪ���С�
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("c:\test\32\test.c");//\tΪˮƽ�Ʊ����
//	printf("c:\\test\\32\\test.c");//\\���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
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
//	printf("%c\n", '\'');//\'���ڱ�ʾ�ַ�����
//	printf("%s\n", "\"");//\"���ڱ�ʾһ���ַ����ڲ���˫����
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",strlen ("c:\test\32\test.c"));
//	\32--32��2��8��������
//	32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ���
//	32--10����26--16����1AH--1AH����Ӧ��ASCII�ַ���
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\32');//\32--32��2��8��������,��ΪASCII��ֵ��Ӧ���ַ���
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
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
	scanf("%d\n", &input);
	if (input == 1)
		printf("�õ���offer\n");
	else
		printf("������\n");
	return 0;
}*/
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 2000)
//	{
//		printf("��һ�д���\n");
//		line++;
//	}
//	printf("��offer\n");
//	printf("%d\n", line);
//	return 0;
//}
//����
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
//�Զ��庯�����Լ�����ĺ�����
//#include<stdio.h.>
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ����10���������ֵ����顣
//	int i = 0;
//	while(i<=9)
//	{
//		printf("%d\n",arr[i]);
//	i++;
//	}
//	//printf("%d\n", arr[6]);//�±����ʽ����Ԫ�ء�
//	//char ch[5];
//	//float cs[10];
//
//	return 0;
//}
//��λ����
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b= a << 2;//��λ�����ǶԶ����ƽ��в�����
//	printf("%d\n", b);//a����֮��a��ֵ���ֲ���
//	printf("%d\n", a);
//	return 0;
//}
//λ����
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
//	a = 20;//=��ֵ��==�ж��Ƿ����
//	a = a + 10;//�ȼ���a+=10;
//	a = a - 20;//�ȼ���a-=10;
//	a = a & 2;//�ȼ���a&=2;
//	//���ϸ�ֵ��
//	/*��Ŀ������
//	˫Ŀ������
//	��Ŀ������*/
//	//C������0Ϊ�٣���0��Ϊ�档
#include<stdio.h>
	int main()
	{
		int a = 10;
		int arr[10] = { 0 };
		//��������Ԫ�صĸ���=�����С����ÿ��Ԫ�صĴ�С
		int sz = 0;
		sz = sizeof(arr) / sizeof(arr[0]);
		printf("sz=%d\n",sz);
		printf("%d\n", sizeof(arr));//sizeof(int)*4=40
		printf("%d\n", sizeof(a));
		printf("%d\n", sizeof(int));
		printf("%d\n", sizeof a);
		//sizeof����ı���/������ռ�ռ�Ĵ�С�����������Ǳ���ʱ�����ſ���ʡ�ԣ���������ͣ�����ʡ�ԡ�
		return 0;
	}