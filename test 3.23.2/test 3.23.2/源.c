//��a,b,c���������Ӵ�С��˳���������С�
//#include<stdio.h>
//int main()
//{
//	int a =6;
//	int b = 99;
//	int c = 10;
//	int d;
//	if (a >=b)
//	{
//		if (b >= c)
//			printf("%d,%d,%d\n", a, b, c);
//		else if (a >= c)
//			printf("%d,%d,%d\n", a, c, b);
//		else
//			printf("%d,%d,%d\n", c, a, b);
//	}
//	else
//	{
//		if (b <= c)
//			printf("%d,%d,%d\n", c, a, b);
//		else if(a>=c)
//			printf("%d,%d,%d\n", b, a, c);
//		else
//			printf("%d,%d,%d\n", b, c, a);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d\n", a, b, c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = c;
//		c = a;
//		a = temp;
//	}
//	if (b < c)
//	{
//		int temp = c;
//		c = b;
//		b = temp;
//	}
//	return 0;
//}
//��ӡ��0-100������3�ı�����
//#include<stdio.h>
//int main()
//{
//	printf("0-10������3�ı���Ϊ��");
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = i % 3;
//		if (a == 0)
//			printf("%d,", i);
//	}
//	return 0;
//}
//�����������������Լ������շת�������
//#include<stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	while (a%b)
//	{
//	    int r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("���Լ��Ϊ��%d\n",b);
//	return 0;
//}
//��ӡ1000-2000֮������ꡣ
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d,",year);
//			i++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d,",year);
//			i++;
//		}
//		else
//			;
//	}
//	printf("\n�ܹ���%d������\n",i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int year = 1000;
//	int n = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d,", year);
//			n++;
//		}
//	}
//	printf("\n��������Ϊ:%d\n", n);
//	return 0;
//}
//��ӡ100-200֮���������
#include<stdio.h>
int main()
{
	int i = 0;
	int j;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n�����ܸ���Ϊ:%d", count);
	return 0;
}
