//����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//#include<stdio.h>
//int main()
//{
//    //����
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

//�û���¼��վ��ͨ����Ҫע�ᣬһ����Ҫ�����������롣�����ж���������������Ƿ�һ�£�һ�������same������һ�������different��
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

//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
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

//����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
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

//����10���������ֱ�ͳ����������������ĸ�����
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

//��������N��Ȼ������N������������N�����ĺ�
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

//����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
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

//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����
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
    //����
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
    //��������
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