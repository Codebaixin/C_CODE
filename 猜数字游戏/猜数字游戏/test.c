#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	//1.���������
	int ret = 0;
	ret = rand()%100+1;//�������0-100֮������֡�
	//printf("%d\n", ret);
	//2.������
	int guess = 0;
	while(1)
	{
		printf("��������ѡ�������:>");
	    scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
menu()
{
	printf("*************************\n");
	printf("**** 1.play   0.exit ****\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ʾ�˵���
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}