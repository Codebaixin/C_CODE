//�򵥵ĵݹ�
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//��һ����λ����λ�����
//23
//���õݹ�ķ�����ӡ��λ��(�ɴ�ӡ����λ������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}//�ݹ��������������Ȼ�������ѭ����
//��һ���ַ������ȡ�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "bit";
//	/*int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("%d", sz);*/
//	int sz = strlen(arr);
//	printf("%d", sz);
//	return 0;
//}
//������
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//�ַ����ں������ݲ���ʱ��ʵ�ʴ��ݵ����ַ������׵�ַ����˺��������ڵĲ���Ӧ����һ��ָ�������
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//������
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
// ��n�Ľ׳ˡ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	printf("%d", j);
//	return 0;
//}
//�����������õݹ���⡣
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Fac(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i*Fac(i - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//������n��쳲���������
//���õݹ�ķ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//��������ѭ���ķ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = 0;
	ret = Fib2(n);
	printf("%d\n", ret);
	return 0;
}