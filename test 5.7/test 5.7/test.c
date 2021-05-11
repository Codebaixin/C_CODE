//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);//总共的个数
//    int i = 0;
//    int arr[100] = { 0 };
//    int count = 0;
//    int x = 0;
//    scanf("%d", &x);//找的数
//    for (i = 0; i < num; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (x == arr[i])
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}

#include<stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i < 1000; i++)
    {
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            count++;
    }
    printf("%d\n", count);
    return 0;
}