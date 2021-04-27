//一个数表示为六进制后的结果
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    //输入
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    //计算
//    while (n)
//    {
//        arr[i] = n % 6;
//        n = n / 6;
//        i++;
//
//    }
//    int j = 0;
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%d", arr[j]);
//    }
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + i;
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一个闹钟叫他起床学习，但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)
//#include<stdio.h>
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    do
//    {
//        if (m + k >= 60)
//        {
//            h++;
//            k = k - (60 - m);
//            m = 0;
//
//        }
//        else
//        {
//            m = m + k;
//            k = 0;
//        }
//    } while (k);
//    if (h >= 24)
//        h = h % 24;
//    if (h < 10 && m < 10)
//        printf("0%d:0%d\n", h, m);
//    else if (h >= 10 && m < 10)
//        printf("%d:0%d\n", h, m);
//    else if (h < 10 && m >= 10)
//        printf("0%d:%d\n", h, m);
//    else
//        printf("%d:%d\n", h, m);
//    return 0;
//}

//现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    do
//    {
//        if ((n % 10) % 2 == 0)
//        {
//            arr[i] = 0;
//            count++;
//        }
//        else if ((n % 10) % 2 == 1)
//        {
//            arr[i] = 1;
//        }
//        i++;
//        n = n / 10;
//    } while (n);
//    if (count ==i)
//    {
//        printf("0");
//    }
//    else
//    {
//        int j = i-1;
//        while (arr[j] == 0)
//        {
//            j--;
//        }
//        int k = 0;
//        for (k = j; k >= 0; k--)
//        {
//            printf("%d", arr[k]);
//        }
//    }
//}

//一个正整数序列，把这个序列去重后按从小到大排序。
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int temp = 0;
//        scanf("%d", &temp);
//        arr[temp] = temp;
//    }
//    int j = 0;
//    for (j = 0; j < n; j++)
//    {
//        if (arr[j] != 0)
//        {
//            printf("%d ", arr[j]);
//        }
//    }
//    return 0;
//}

//转换规则为：90 - 100为’A’，80 - 89为’B’，70 - 79为’C’，60 - 69为’D’，59以下为’E’。如果输入的成绩不在0 - 100之间，输出’F’。
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score > 100)
//        printf("F\n");
//    else if (90 <= score)
//        printf("A\n");
//    else if (score >= 80)
//        printf("B\n");
//    else if (score >= 70)
//        printf("C\n");
//    else if (score >= 60)
//        printf("D\n");
//    else if (score >= 0)
//        printf("E\n");
//    else
//        printf("F\n");
//    return 0;
//}

//小乐乐获得4个最大数，请帮他编程找到最大的数。
//#include<stdio.h>
//int main()
//{
//    int n = 4;
//    int arr[4] = { 0 };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    printf("%d\n", arr[0]);
//    return 0;
//}

