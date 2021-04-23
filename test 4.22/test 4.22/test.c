//从键盘输入5个人的身高（米），求他们的平均身高（米）。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    double n = 0.0;
//    int i = 0;
//    double sum = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%lf ", &n);
//        sum = sum + n;
//    }
//    printf("%.2lf\n", sum / 5.0);
//    return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        }
//    }
//    return 0;
//}

//打印用数字组成的数字三角形图案。
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
/*#include<stdio.h>
int main()
{
    int sum=0;
    int max=0;
    int min=100;
    int i=7;
    int n=0;
    for(i=0;i<7;i++)
    {
        scanf("%d ",&n);
        sum=sum+n;
        if(n>max)
            max=n;
        if(n<min)
            min=n;
    }
    printf("%.2lf\n",(sum-min-max)/5.0);
    return 0;
}*/

//#include<stdio.h>
//int main()
//{
//    int arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    for (i = 0; i < 6; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 6 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    printf("%.2lf ", (arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) / 5.0);
//    return 0;
//}

//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//#include<stdio.h>
//int main()
//{
//    //输入
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 1;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    //计算
//    for (i = n; i >= 1; i--)
//    {
//        if (m < arr[i])
//        {
//            arr[i + 1] = arr[i];
//            arr[i] = m;
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    //输出
//    for (i = 1; i <= n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度。若两幅图像在相同位置上的像素点颜色相同，则称它们在该位置具有相同的像素点。两幅图像的相似度定义为相同像素点数占总像素点数的百分比。
//#include<stdio.h>
//int main()
//{
//    //输入
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int i = 0;
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //比较
//    int count = 0;
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    //输出
//    printf("%.2lf\n", (count * 100.0) / (m * n));
//    return 0;
//}

//KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，
//#include<stdio.h>
//int main()
//{
//    //处理过程
//    int count = 0;
//    int i = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int t = i;
//        while (t)
//        {
//            if (t % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            t = t / 10;
//        }
//    }
//    //输出
//    printf("%d\n", count);
//    return 0;
//}
//
////任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。 
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//            a++;
//        else
//            b++;
//    }
//    printf("%d %d\n", b, a);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//            a++;
//    }
//    printf("%d %d\n", n - a, a);
//    return 0;
//}

