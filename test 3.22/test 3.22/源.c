//#include<stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)//EOFΪ�ļ�������־��
//	{
//		printf("%c\n", ch);
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf_s("%s", password);//�������벢�����password�����С�
//	��������ʣ��һ��'\n'��
//	getchar();//��ȡһ��'\n'��
//	printf("��ȷ��(Y/N):");
//	ret = getchar();
//	if (ret =='Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch >= '0' & ch <= '9')
//			printf("%c\n", ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			printf("%c\n", ch);//����putchar(ch);
//	}
//	return 0;
//}
//forѭ����
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//		printf("%d,", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//��while��forѭ���У�break������������ѭ����
//		printf("%d,", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//
//		printf("%d,", i);
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
//			break;
//		printf("%d,", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}
//forѭ���ĳ�ʼ�����жϣ�����������ʡ�ԡ�
//�����ж�����ʡ�ԣ����Ϊ�档
//���������������鲻Ҫʡ�ԡ�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("�Ǻ�\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;//��ѭ��ִ��0�Σ���Ϊk��ֵ��ֵΪ0����Ϊ���������������ѭ����
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d,", i);
//		i++;
//	} 	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d,", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d,", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 3;
	int i = 1;
	int sum=1;
	for (i = 1; i<=3; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}