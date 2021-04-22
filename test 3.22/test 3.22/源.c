//#include<stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)//EOF为文件结束标志。
//	{
//		printf("%c\n", ch);
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf_s("%s", password);//输入密码并存放在password数组中。
//	缓冲区还剩下一个'\n'。
//	getchar();//读取一下'\n'。
//	printf("请确认(Y/N):");
//	ret = getchar();
//	if (ret =='Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch >= '0' & ch <= '9')
//			printf("%c\n", ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			printf("%c\n", ch);//或者putchar(ch);
//	}
//	return 0;
//}
//for循环。
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//		printf("%d,", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//在while与for循环中，break都是跳出整个循环。
//		printf("%d,", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//
//		printf("%d,", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d,", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}
//for循环的初始化，判断，调整都可以省略。
//如若判断条件省略，则恒为真。
//如若不熟练，建议不要省略。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("呵呵\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;//此循环执行0次，因为k的值赋值为0；恒为假条件，因此跳出循环。
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d,", i);
//		i++;
//	} 	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d,", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d,", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 3;
	int i = 1;
	int sum=1;
	for (i = 1; i<=3; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}