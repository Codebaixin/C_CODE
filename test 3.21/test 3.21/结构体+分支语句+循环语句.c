//#include<stdio.h>
//int main()
//{
//	double c = 5.35;
//	double* o = &c;
//	*o = 2.45;
//	printf("c=%lf\n", c);
//	printf("c=%lf\n", *o);
//	printf("%d\n", sizeof(o));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
//�ṹ��--�����������Ӷ���--�����Լ�������������͡�
//����һ���ṹ�塣
//struct Book
//{
//	char name[20];
//	int price;
//};
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);//->    �ṹ��ָ��->��Ա
//	printf("������%s\n", b1.name) ;
//	printf("�۸�%d\n", b1.price);//.   �ṹ�����.��Ա
//	b1.price = 15;//���ļ۸�
//	//strcpy(b1.name, "C++");�������֣���������Ϊ���飬���Ҫ�õ�strcpy������
//	//printf("%s\n", b1.name);
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}
//C������һ���ֺŴ���һ����䡣
//��֧�ṹ
//����֧�ṹ
//#include<stdio.h>
//int main()
//{
//	int age = 5;
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	return 0;
//}
//����֧�ṹ
//#include<stdio.h>
//int main()
//{
//	int age = 30;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}
//���֦�ṹ
//#include<stdio.h>
//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age < 60)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}
//�����������Ҫִ�ж�����䣬Ҫ�ô����Ž��������������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else�������δƥ���if��ƥ�䡣
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");//��ʱelseֻ�������������if��ƥ�䡣
//	return 0;
//}
// if�����÷���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d\n", &a);
//	int c = a % 2;
//	if (c == 1)
//		printf("%dΪ����", a);
//	else
//		printf("%dΪż��", a);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("0-100�������Ϊ��"); 
//	while (a <= 100)
//	{
//		int c = a % 2;
//		if (c == 1)
//			printf("%d,", a);//����else�����һ������䣬��;
//		a++;
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//switch����÷�
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	if (day == 1)
//		printf("����һ\n");
//	else if (day = 2)
//		printf("���ڶ�\n");
//	...
//	else if (day = 6)
//		printf("������\n");
//	else if (day = 7)
//		printf("������\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int day;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:printf("����һ\n");
//		break;
//	case 2:printf("���ڶ�\n");
//		break;
//	case 3:printf("������\n");
//		break;
//	case 4:printf("������\n");
//		break;
//	case 5:printf("������\n");
//		break;
//	case 6:printf("������\n");
//		break;
//	case 7:printf("������\n");
//		break;
//	}
//	return 0;
//}
//switch����ʺ��ڶ��֦��䡣����switch�ڵı������ͱ���Ϊ���Ρ�
//��ɫ���ʽ�����ǳ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int day;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");//default�����������ݷ�Χ֮������ݡ�
//	}
//	return 0;
//}
//����Ļ�����δ�ӡ��1-10��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<11)
//	{
//		/*if (5 == i)
//			break;*/
//		printf("%d ", i);//����ѭ����������breakʱ��ѭ�����˽�����
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);//continue��ֹѭ���б���ѭ��������ִ�к�����룬ֱ����ת��ѭ�����жϲ��֣��жϻ��Ƿ�������С�
//	}
//}
#include<stdio.h>
int main()
{
	int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;
}