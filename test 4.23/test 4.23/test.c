//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//#include<stdio.h>
//int main()
//{
//    //输入
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    double max = 0.0;
//    double min = 100.0;
//    double sum = 0.0;
//    double score = 0.0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%lf", &score);
//        sum = sum + score;
//        if (max < score)
//            max = score;
//        if (min > score)
//            min = score;
//    }
//    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
//}

//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char password_1[100] = { 0 };
//    char password_2[100] = { 0 };
//    scanf("%s %s", password_1, password_2);
//    if (strcmp(password_1, password_2) == 0)
//    {
//        printf("same\n");
//    }
//    else
//    {
//        printf("different\n");
//    }
//    return 0;
//}

//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int i = 0;
    int j = 0;
    int arr[100][100] = { 0 };
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (arr[i][j] > 0)
                sum = sum + arr[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}

//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//输入10个整数，分别统计输出正数、负数的个数。
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    int i = 0;
//    int num = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &num);
//        if (num > 0)
//            count++;
//    }
//    printf("positive:%d\n", count);
//    printf("negative:%d\n", 10 - count);
//    return 0;
//}

//输入数字N，然后输入N个数，计算这N个数的和
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    int i = 0;
//    int m = 0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &m);
//        sum = sum + m;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int max = 0;
//    int min = 100;
//    int score = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (max < score)
//            max = score;
//        if (min > score)
//            min = score;
//    }
//    printf("%d\n", max - min);
//    return 0;
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    if (arr[0] > arr[1])
//    {
//        for (i = 1; i < n - 1; i++)
//        {
//            if (arr[i] < arr[i + 1])
//                break;
//        }
//    }
//    else
//    {
//        for (i = 1; i < n - 1; i++)
//        {
//            if (arr[i] > arr[i + 1])
//                break;
//        }
//    }
//    if (i == n - 1)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    //输入
    int n = 0;
    scanf("%d", &n);
    int arr[100] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = 0;
    scanf("%d", &l);
    //分析处理
    for (i = 0; i < n; i++)
    {
        if (arr[i] == l)
        {
            int j = 0;
            for (j = i; j < n; j++)
            {
                arr[i] = arr[i + 1];
            }
            break;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}