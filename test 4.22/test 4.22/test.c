//�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���
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

//��ӡ��������ɵ�����������ͼ����
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


//��7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
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

//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//#include<stdio.h>
//int main()
//{
//    //����
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
//    //����
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
//    //���
//    for (i = 1; i <= n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//����������ͬ��С�ĺڰ�ͼ����0-1���󣩱�ʾ�������ǵ����ƶȡ�������ͼ������ͬλ���ϵ����ص���ɫ��ͬ����������ڸ�λ�þ�����ͬ�����ص㡣����ͼ������ƶȶ���Ϊ��ͬ���ص���ռ�����ص����İٷֱȡ�
//#include<stdio.h>
//int main()
//{
//    //����
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
//    //�Ƚ�
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
//    //���
//    printf("%.2lf\n", (count * 100.0) / (m * n));
//    return 0;
//}

//KiKi��֪��1~2019���ж��ٸ���������9�������������ֵ�����ָ��ĳһλ�ǡ�9��������
//#include<stdio.h>
//int main()
//{
//    //�������
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
//    //���
//    printf("%d\n", count);
//    return 0;
//}
//
////��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������ 
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

