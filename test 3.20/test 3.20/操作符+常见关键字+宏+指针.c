//#include<stdio.h>
//int main()
//{
//	//�ַ����Ľ�����־��'\0'
//	//'\0'--ת���ַ�--0;
//	//0-��������0��
//	//'0'�����ַ�0����ASIICֵΪ48��
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int arr[n]= { 0,1,2,3,4,5,6,7,8,9 };//�����������ڵ�������Ϊ������
//	return 0;
//}
//#include<stdio.h>
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int MAX;
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������\n");
//	scanf_s("%d%d\n", & num1, & num2);
//	MAX = max(num1, num2);
//	printf("max=%d\n", MAX);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++��
//	int c = ++a;//ǰ��++����++����ʹ�ã�
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//����Ϊǿ��ת������
//	return 0;
//}//!=��ʾ�����ڡ�
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a && b;//C�����н����߼�����ʱ����0Ϊ1��0Ϊ0��
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}
//����������exp1?exp2:exp3;
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*max = (a > b ? a : b);*/
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//	return 0;
//}
//���ű��ʽ
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//�±����ò�������
//	return 0;
//}
//#include<stdio.>
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
//	int c = add(a, b);
//	printf("c=%d\n", c);//����Ϊ�������ò�������
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	register int a = 10;����register�ǽ����a����Ϊ�Ĵ���������
//	return 0;
//}
//int�ȼ���signed int��
//typedef-���Ͷ���-�����ض���
// #include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num1 = 20;
//	printf("num=%d,num1=%d", num, num1);
//	return 0;
//}
//static���ξֲ�����
//�ֲ��������������ڱ߳��ˡ�
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//aΪһ����̬�ľֲ������ˡ�
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static����ȫ�ֱ���
//static�ı���������-�þ�̬��ȫ�ֱ���ֻ���Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ���ˡ�
//#include<stdio.h>
//int main()
//{
//	extern int l;
//	printf("l=%d\n", l);
//	return 0;
//}
//static���κ�����
//Ҳ�Ǹı��˺�����������
//#include<stdio.h>
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#define�����ʶ��������
//#include<stdio.h>
//#define max 100
//int main()
//{
//	int a = max;
//	printf("a=%d\n", a);
//	return;
//}
//#define�����
//���ú����ķ�ʽʵ����������С�ıȽϡ�
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//���ú�ķ�ʽʵ�ִ�С�Ƚ�
//#include<stdio.h>
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 22;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a; /* ȡ��ַ*/
//	//��һ�ֱ�����������ŵ�ַ��--ָ�����
//	*p = 20;//*-�����ò�������
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("a=%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 'd';
//	printf("%p\n", &ch);
//	char* ep = &ch;
//	*ep = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(ep));
//	return 0;
//}
//#include<stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}
#include<stdio.h>
void test()
{
	static int a = 1;//aΪһ����̬�ľֲ������ˡ�
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}