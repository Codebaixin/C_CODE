//��̬�ڴ����
//malloc
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(4 * sizeof(int));//pΪ���ٿռ���׵�ַ��
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//ʹ�ú󣬽��й黹
//	free(p);
//	p = NULL;
//	return 0;
//}

//calloc
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//int* p = (int*)malloc(4 * sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//		if (p == NULL)
//		{
//			printf("%s\n", strerror(errno));
//		}
//		else
//		{
//			int i = 0;
//			for (i = 0; i < 5; i++)
//			{
//				*(p + i) = i;
//			}
//		}
	//������ʹ��malloc���ٵ�20���ֽڿռ䡣
	//����20�������ã���Ҫ40���ֽڿռ䣬����ʹ��realloc��
    //reallocʹ��ע�����
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ���Խ���׷�ӣ���ֱ��׷�ӣ��󷵻�p��
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ���Խ���׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
	//��󷵻��¿��ٵ��ڴ�ռ��ַ��
	//3.����һ���µı���������realloc�����ķ���ֵ��

//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//void Getmemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str =NULL;
//	Getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////�����������⣺1.Զ�̴���������ֱ�������2.��������ڴ�й¶���
//int main()
//{
//	test();
//	return 0;
}
//�޸ķ���һ
//#include<stdio.h>
//#include<stdlib.h>
//void Getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	Getmemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//�޸ķ�����
//#include<stdio.h>
//char* Getmemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str =NULL;
//	str=Getmemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<stdio.h>
char* GetMemory(void) 
{
	//static char p[] = "hello world";��̬��
	char p[] = "hello world";//ջ��
	return p;
}
void Test(void) {
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
int main()
{
	Test();
	return 0;
}