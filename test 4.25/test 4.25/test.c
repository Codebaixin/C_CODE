//void(* signal(int, void(*)(int) ) )(int);
//�ȼ���typedf void(*pfun_t)(int)==typedf void(*)(int) pfun_t;
//pfun_t signal(int,pfun_d);
//signal��һ����������
//signal�����Ĳ�������������һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ��Ĳ�����int������ֵ��void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��Ĳ�����int������ֵ��void��

//����ָ������-������ź���ָ�������
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];//ָ������
//	int (*pa)(int, int) = add;//sub,mul,div
//	int (*p[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*p[i])(2, 3));
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add   2.sub  **\n");
//	printf("**   3.mul   4.div  **\n");
//	printf("*******  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		switch (input)
//		{
//		case 1:
//			printf("������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", add(x,y));
//			break;
//		case 2:
//			printf("������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", sub(x,y));
//			break;
//		case 3:
//			printf("������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", mul(x,y));
//			break;
//		case 4:
//			printf("������������:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", div(x,y));
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ���������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add   2.sub  **\n");
//	printf("**   3.mul   4.div  **\n");
//	printf("*******  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	int (*fund[5])(int, int) = { 0,add,sub,mul,div };//fund ��һ������ָ������-ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������:");
//			scanf("%d %d", &x, &y);
//			int ret= fund[input](x, y);//(*fund[input])(x, y)==fund[input](x, y).
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//
//	} while (input);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void clc(int (*ptr)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������������:>");
//	scanf("%d %d",&x, &y);
//	printf("%d\n", (*ptr)(x, y));
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("**   1.add   2.sub  **\n");
//	printf("**   3.mul   4.div  **\n");
//	printf("*******  0.exit ******\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			clc(add);
//			break;
//		case 2:
//			clc(sub);
//			break;
//		case 3:
//			clc(mul);
//			break;
//		case 4:
//			clc(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ���������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ����pΪһ������ָ�롣
//
//	int (*pf)(int, int);//����ָ�롣
//	int(*(ptr[4]))(int, int);//ptr��һ������-����ָ�����顣
//	//pttr��һ��ָ����ָ�������ָ�롣
//	int (*(*pttr)[4])(int, int) = &ptr;
//	//pttr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ�ء�
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int);
//
//}

//#include<stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test( void (*p)(char*) )
//{
//	printf("test\n");
//	(*p)("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//void test(char** p)
//{
//
//}
//int main()
//{
//    char c = 'b';
//    char* pc = &c;
//    char** ppc = &pc;
//    char* arr[10];
//    test(&pc);
//    test(ppc);
//    test(arr);//Ok
//    return 0;
//}
//
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa[10]) = &arr;
//	//����ָ��
//	int (*paa)(int, int) = add;
//	//int sum=paa(1,2);
//	//int sum=(*paa)(1,2);
//	//����ָ������
//	int (*pbb[5])(int, int);
//	//ָ����ָ�������ָ��
//	int (*(*pcc)[5])(int, int) = &pbb;
//	return 0;
//}
//void*���͵�ָ�룬���Խ����������͵ĵ�ַ��
//void*���͵�ָ�룬�����Խ��н����ò�����
//void*���͵�ָ�룬�����Խ��мӼ��˳�������

//����qosrt����ʵ������
//#include <stdio.h>
//#include<stdlib.h>
////qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//
//    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
// ��һ���������������������Ԫ�صĵ�ַ
// �ڶ��������������������Ԫ�ظ���
// �����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
// ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ�֡�
//              ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ��
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//��дһ�����򣬶������������ݽ���ð������
//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        * ((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;
//    }
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//            {
//                _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}