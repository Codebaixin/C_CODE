//һ������ʾΪ�����ƺ�Ľ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    //����
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    int i = 0;
//    //����
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


//С���ֱȽ����裬��������˯����Ȼ����ȥѧϰ����֪�����ڵ�ʱ�̣��Լ��Լ�Ҫ˯��ʱ�������趨һ�����ӽ�����ѧϰ��������̫���ˣ���֪��Ӧ�ð������趨���ĸ�ʱ�̣������������(ֻ����ʱ�ͷ֣�����������)
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

//���ڵõ���һ���������ÿλ�������0��1�����ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
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

//һ�����������У����������ȥ�غ󰴴�С��������
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

//ת������Ϊ��90 - 100Ϊ��A����80 - 89Ϊ��B����70 - 79Ϊ��C����60 - 69Ϊ��D����59����Ϊ��E�����������ĳɼ�����0 - 100֮�䣬�����F����
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

//С���ֻ��4������������������ҵ���������
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

