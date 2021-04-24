//将a,b,c三个数按从大到小的顺序依次排列。
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
//打印出0-100间所有3的倍数。
//#include<stdio.h>
//int main()
//{
//	printf("0-10间所有3的倍数为：");
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = i % 3;
//		if (a == 0)
//			printf("%d,", i);
//	}
//	return 0;
//}
//给定两个数，求最大公约数。（辗转相除法）
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
//	printf("最大公约数为：%d\n",b);
//	return 0;
//}
//打印1000-2000之间的闰年。
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
//	printf("\n总共有%d个闰年\n",i);
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
//	printf("\n闰年总数为:%d\n", n);
//	return 0;
//}
//打印100-200之间的素数。
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
	printf("\n素数总个数为:%d", count);
	return 0;
}
