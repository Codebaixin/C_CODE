//���������������е����У����������кϲ�Ϊһ���������в������
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr1[100] = { 0 };
//    int arr2[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    while (j < m && k < n)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            printf("%d ", arr1[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d ", arr2[k]);
//            k++;
//        }
//    }
//    if (j == m)
//    {
//        for (; k < n; k++)
//        {
//            printf("%d ", arr2[k]);
//        }
//    }
//    else
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr1[j]);
//        }
//    }
//    return 0;
//}

//����n�����������У�Ҫ���������н���ȥ�ز�������νȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ�á�
//#include<stdio.h>
//int main()
//{
//    //����
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[5000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //����
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j <= n - 1; j++)
//        {
//            if (arr[j] == arr[i])
//            {
//                int k = 0;
//                for (k = j; k <= n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    int l = 0;
//    for (l = 0; l < n; l++)
//    {
//        printf("%d ", arr[l]);
//    }
//    return 0;
//}

//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    //����
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int l = 0;
//    scanf("%d", &l);
//    //��������
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == l)
//        {
//            int j = 0;
//            for (j = i; j < n; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            i--;
//            count++;
//        }
//    }
//    for (i = 0; i < n - count; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//���������ββ���Ϊһ������ָ��ʱ����ʵ�ο���Ϊ���������
//void test(int** p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//	return 0;
//}

//���������ββ���Ϊһ��һ��ָ��ʱ����ʵ�ο���Ϊ���������
//void test1(int* p)
//{
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	return 0;
//}

//����ָ�롪ָ�������ָ�롣
//����ָ�롪ָ������ָ�롪��ź�����ַ��
//#include<stdio.h>
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
//	printf("%d\n", add(a, b));
//	printf("%p\n", &add);
//	printf("%p\n", add);
//
//	int (*p)(int,int) = add;
//	printf("%d\n", (*p)(2, 3));
//	return 0;
//	//&�������ͺ��������Ǻ����ĵ�ַ
//}

void Print(char* str)
{
	printf("%s\n", str);
}
#include<stdio.h>
int main()
{
	void (*p)(char*) = Print;
	(*p)("hello bit");
	return 0;
}