//λ�Ρ�������λ-����������ʡ�ռ��
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit-6���ֽ�*8=48bit;
//#include<stdio.h>
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽڡ�
//	return 0;
//}

//struct S 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//#include<stdio.h>
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽڡ�
//	return 0;
//}

//ö������
//#include<stdio.h>
//enum sex
//{
//	//ö�ٿ��ܵ�ȡֵ������
//	male,//0
//	female,//1
//	secret//2
//};//ö�ٵĸ�ֵ����enum���ڡ�
//int main()
//{
//	//enum sex s = secret;
//	//s = female;
//	//enum sex s=2;//�þ�Ϊ�����﷨���޷���intת��Ϊö�����͡�
//	printf("%d %d %d\n", male, female, secret);
// printf("%d\n",sizeof(s));//���Ϊһ�����α������ֽڴ�С��
//	return 0;
//}

//����-������-������-����ͬһ��ռ�
//#include<stdio.h>
//union Un
//{
//	char c;
//	int a;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//���Ϊ4��
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.a));
//}

//�ж��ڴ�Ĵ洢��ʽ
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}
//������
//#include<stdio.h>
//union U
//{
//	int i;
//	char c;
//}u;
//int main()
//{
//	u.i = 1;
//	if (u.c == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

#include<stdio.h>
struct S3
{
	double d;
	char c;
	int i;
};
int main()
{
	struct S3 s;
	printf("%d\n", sizeof(s));
	return 0;
}

