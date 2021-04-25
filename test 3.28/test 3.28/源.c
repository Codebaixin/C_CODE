//#include<stdio.h>
//int main()
//{
//    printf("Practice makes perfect!");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("v   v\n");
//    printf(" v v \n");
//    printf("  v  \n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = sizeof(int);
//    int b = sizeof(short);
//    int c = sizeof(long);
//    int d = sizeof(long long);
//    printf("The size of short is %d bytes.\n", b);
//    printf("The size of int is %d bytes.\n", a);
//    printf("The size of long is %d bytes.\n", c);
//    printf("The size of long long is %d bytes.\n", d);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("0%o 0X%X\n", 1234, 1234);//X大写表示输出的16进制数中的字母为大写字母，若x为小写，则输出的16进制数中的字母为小写字母。
//    printf("%#o %#X\n", 1234, 1234);
//    return 0
//将四位数反向输出。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	char arr[4] = { '1','2','3','4' };
//	for (n = 3; n >= 0; n--)
//		printf("%c", arr[n]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ch=getchar();
//	putchar(ch+32);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = { "AGHJL" };
//	int n = sizeof(arr) / sizeof(arr[0]) - 2;
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		putchar(arr[i] + 32);
//		//printf("%c",arr[i]+32);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int ch=0;
//    while((ch=getchar())!=EOF)
//    {
//        putchar(ch+32);
//        printf("\n");
//        getchar();
//        
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("     **     ");
//    printf("     **     ");
//    printf("************");
//    printf("************");
//    printf("    *  *    ");
//    printf("    *  *    ");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 121;
//	int b = 0;
//	b = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf_s("%d %d\n", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int ch;
//    scanf("%c\n", ch);
//    printf("%d\n", ch);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int a = 2;
//    int i = 0;
//    scanf("%d\n", &n);
//    for (i = 0; i <= n - 2; i++)
//    {
//        a = a << 1;
//    }
//    printf("%d\n", a);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int a = 2;
//    int i = 0;
//    while (scanf("%d\n", &n) != EOF);
//    {
//    for (i = 0; i <= n - 2; i++)
//    {
//        a = a << 1;
//    }
//    printf("%d\n", a);
//    }
//    return 0;
//}
#include<stdio.h>
//int main()
//{
//    int ret = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", ret);
//    return 0;
//}
#include<stdio.h>
int main()
{
    char arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int i = 0;
    for (i = 0; i <= n; i++)
    {
        printf("%c,", arr[i]);
    }
    return 0;
}
