//1-99�к��ж��ٸ���9������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9)|| (i / 10 == 9))
//		{
//			printf("%d ", i);
//			j++;
//		}
//	}
//	printf("\n1-100�ں�9�ĸ���Ϊ��%d\n", j);
//	return 0;
//��1-1/2+1/3-1/4+.....+1/99-1/100�ĺ͡�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double h = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2==0)
//			h = -1.0 / i;
//		if (i%2==1)
//			h = 1.0 / i;
//		sum = sum + h;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag *1.0/ i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//����Ļ������ʮ���������ҳ����е����ֵ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//scanf("%d", arr[i]);
//	int max = arr[0]; 
//	for (j = 0; j <= 9; j++)
//	{
//		if (max < arr[j])
//			max = arr[j];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//�˷��ھ�������Ļ�����9*9�ĳ˷���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int integral = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int ass[] = { 1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i <= 8; i++)
//	{
//		for (j = 0; j <= 8; j++)
//		{
//			integral = arr[i] * arr[j];
//			printf("%d*%d=%d\n", arr[i], arr[j], integral);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int integral = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			integral = i * j;
//			printf("%d*%d=%-2d ", i, j, integral);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//д��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("****1.start 0.exit****\n");
//	printf("**********************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	int in = 0;
//	while (1)
//	{
//		printf("�����룺");
//		scanf("%d", &in);
//		if (ret > in)
//			printf("��̫С\n");
//		else if (ret < in)
//			printf("��̫��\n");
//		else
//		{
//			printf("��ϲ�㣬�ҵ���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������,����������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//goto�÷�
//#include<stdio.h>
//int main()
//{
//	agin:
//	printf("��ӭ����bit\n");//��ѭ����
//	goto agin;
//}
//���Թػ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ���\n");
//	scanf("%s", &input);
//	if (strcmp(input, "������")==0)
//	{
//		system("shutdown -a"); 
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ���\n");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}