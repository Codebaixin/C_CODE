//#include<stdio.h>
//int main()//main����ǰ��int��ʾmain�������ú󷵻�һ������ֵ��
//{
//	printf("hello world\n");//������-�������ڣ����ҽ���һ��������˳��ṹִ�С�
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;//���� 0
	//�⺯����C���Ա����ṩ������ʹ�õĺ�����
	//ʹ�ñ��˵Ķ���Ҫ��ǰ���˴��к��������������ʹ�õ��ĺ���Ҫ�������������ʼ�Ĵ���#include<stdio.h>��
//}printfΪ��ӡ������
//#include<stdio.h>
//int main()
//{
	//char ch='A';//������һ�������ռ�洢��ʽ���ַ��ͣ��洢�ط�������Ϊch���洢������Ϊ�ַ�A
	//printf("%c\n", ch);//printf("----")ֱ�Ӵ�ӡ˫����������ݡ�prinft("%c\n", ch)��ch���������ַ���ʽ��ӡ������
	//printf("%d\n", ch);//%c--��ӡ�ַ���ʽ�����ݡ�%d����ʮ������
	//float f = 5.0;
	//printf("%f\n", f);
	//double f = 3.14;
	//printf("%lf\n", f);
	//return 0;
	//int---����
	//short int---������
	//long---������
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}��������ķ�ʽ�ǣ�������+������+����ֵ��
//#include<stdio.h>
//int num2 = 20;//ȫ�ֱ����������ڴ�����ⲿ
//int main()
//{
//	int num1 = 10;//�ֲ������������ڴ�����ڲ�
//	return 0;
//}
//#include<stdio.h>
//int glob = 2018;
//int main()
//{
//	int glob = 2020;//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug��
//	printf("%d\n", glob);//���ֲ�������ȫ�ֱ���������ͬʱ���ֲ��������ȡ�
//	return 0;
//}
//#include<stdio.h>
//int a = 30;
//int main()
//{
//	//int a = 20;
//	{
//		int a = 10;
//		//printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}
#include<stdio.h>
int main()
{//����extern�ⲿ���ŵ�
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
//�ֲ��������������Ǳ������ڵľֲ���Χ��
//ȫ�ֱ��������������������̡�
//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//ȫ�ֱ��������������ǣ�����������������ڡ�