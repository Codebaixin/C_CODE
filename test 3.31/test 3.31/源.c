//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.play 0.exit***\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int ret = 0;
//	ret = rand()%100+1;
//	int guess = 0;
//	while(1)
//	{
//		printf("���������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		srand((unsigned)time(NULL));
//		menu();
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//			break;
//		}
//		else if (input == 0)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else
//			printf("�������������ѡ��\n");
//	} while (input);
//	return 0;
//}
//������Ϊ�⺯�����Զ��庯��
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 77;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//�⺯��
//strcpy��ʹ�á�(�ַ���ĩβ��\0Ҳ������ȥ�ˡ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { "������" };
//	char arr2[20] = { "������" };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset memory-�ڴ� set-���á�
//#include<stdio.h>
//int main()
//{
//	char arr1[] = { "hello bit" };
//	memset(arr1, 'a', 3);
//	printf("%s\n", arr1);
//	return 0;
//}
//�Զ��庯��
//дһ���������ҳ����������е����ֵ��
//#include<stdio.h>
//int MAX(int x, int y)
//{
//	int z = 0;
//	if (x >= y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = -20;
//	int b = -10;
//	int max = MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}
//дһ�����������Խ����������α���������
//����һ
//#include<stdio.h>
//int a = 350;
//int b = 20;
//void exchange()
//{
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//}
//int main()
//{
//	exchange();
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//������
//#include<stdio.h>
//void swp(int* pa ,int* pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swp(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//��ʵ�δ����β�ʱ���β�ʵ������ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�εġ�
//�����ĵ��÷ִ�ֵ�����봫ַ���á�
//дһ�����������ж�һ�����ǲ���������
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n - 1; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	if (j == n)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//дһ���������ж�һ���Ƿ�Ϊ���ꡣ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int jud_year(int n)
//{
//	if (n % 400 == 0)
//		return 1;
//	else if((n%4==0)&&(n%400!=0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d\n", &num);
//	jud_year(num);
//	if (jud_year(num) == 1)
//		printf("����Ϊ����\n");
//	else
//		printf("����Ϊƽ��\n");
//	return 0;
//}
//#include<stdio.h>      
//int binary_search(int arr[], int k, int sz)//��ʱarrʵ��Ϊһ��ָ�롣
//{
//	int lift = 0;
//	int right = sz - 1;
//	while (lift <= right)
//	{
//		int mid = (lift + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			lift = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int k = 1;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a=binary_search(arr, k, sz);
//	if (a == -1)
//		printf("δ�ҵ�\n");
//	else
//		printf("�ҵ��ˣ������±�Ϊ%d\n", a);
//	return 0;
//}
// дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//#include<stdio.h>
//void sex(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	sex(&num);
//	printf("num=%d\n", num);
//	sex(&num);
//	printf("num=%d\n", num);
//	sex(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//������Ƕ�׵���
//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ�����
//#include<stdio.h>
//int main()
//{
//	//int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ�Ǵ�ӡ��ǰ����ַ��ĸ�����
	return 0;
}