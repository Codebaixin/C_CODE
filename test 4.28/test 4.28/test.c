//喝汽水，1元1瓶，2空瓶可换1瓶，给20元可喝多少瓶。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > +2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//printf("%p\n", &arr[12]);//程序进入死循环的原因是因为arr[12]的地址和i的地址一样。
//	//printf("%p\n", &i);
//	return 0;
//}

//打印杨辉三角
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//		}
//		if (i >= 2 && j >= 1)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", &arr);
//	printf("%s", arr);
//	return 0;
//}

//写一个程序可以实现左旋字符串中的k个字符，如：ABCD 2->CDBA
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reserve(char* p, int sz, int k)
//{
// assert(p!=NULL);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		int temp = *p;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		*(p + j) = temp;//*(p+sz-1)=temp;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", &arr);
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	reserve(arr, sz, k);
//	printf("%s", arr);
//}

//方法二：三步翻转法
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
//void reserve(char* lift, char* right)
//{
//	assert(lift != NULL);
//	assert(right != NULL);
//	while (lift < right)
//	{
//		int tmp = *(lift);
//		*(lift) = *(right);
//		*(right) = tmp;
//		lift++;
//		right--;
//	}
//}
//void lift_move(char* p, int sz, int k)
//{
//	assert(k < sz);
//	assert(p != NULL);
//	reserve(p, p + k - 1);
//	reserve(p + k, p + sz - 1);
//	reserve(p, p + sz - 1);
//}
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", &arr);
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	lift_move(arr, sz, k);
//	printf("%s", arr);
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    unsigned int sum = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d", &sum);
//    for (i = 0; i <= sum; i++)
//    {
//        for (j = 0; j <= sum; j++)
//        {
//            if (sum == i * i + j * j)
//            {
//                printf("true\n");
//                return 0;
//            }
//        }
//    }
//    if (i == sum+1)
//        printf("false\n");
//    return 0;
//}