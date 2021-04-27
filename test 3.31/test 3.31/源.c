//猜数字游戏
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
//		printf("请输入数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了！\n");
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
//			printf("退出游戏\n");
//			break;
//		}
//		else
//			printf("输入错误，请重新选择\n");
//	} while (input);
//	return 0;
//}
//函数分为库函数和自定义函数
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
//库函数
//strcpy的使用。(字符串末尾的\0也拷贝过去了。）
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { "你是猪" };
//	char arr2[20] = { "我是猪" };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset memory-内存 set-设置。
//#include<stdio.h>
//int main()
//{
//	char arr1[] = { "hello bit" };
//	memset(arr1, 'a', 3);
//	printf("%s\n", arr1);
//	return 0;
//}
//自定义函数
//写一个函数，找出两个整数中的最大值。
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
//写一个函数，可以交换两个整形变量的内容
//方法一
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
//方法二
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
//当实参传给形参时，形参实际上是实参的一份临时拷贝，对形参的修改是不会改变实参的。
//函数的调用分传值调用与传址调用。
//写一个函数用来判断一个数是不是素数。
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
//写一个函数，判断一年是否为闰年。
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
//		printf("该年为闰年\n");
//	else
//		printf("该年为平年\n");
//	return 0;
//}
//#include<stdio.h>      
//int binary_search(int arr[], int k, int sz)//此时arr实际为一个指针。
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
//		printf("未找到\n");
//	else
//		printf("找到了，它的下标为%d\n", a);
//	return 0;
//}
// 写一个函数，每调用一次这个函数，就会将num的值增加1
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
//函数的嵌套调用
//链式访问：将一个函数的返回值作为另一个函数的参数。
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
	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印当前语句字符的个数。
	return 0;
}