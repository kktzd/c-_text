#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    /*int sum = 1;
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    printf("%d\n", sum);*/


    int sum = 1;
    int n = 0;
    int j = 0;
    //for (n = 1; n <= 10; n++) {
    //    sum = 1;        //�ڼ���ÿһ�ν׳�֮ǰ����ʼ��һ��
    //    for (int i = 1; i <= n; i++) {
    //        sum *= i;
    //    }
    //    j += sum;
    //}
    //printf("%d\n", j);

    /*for (n = 1; n <= 10; n++) {
        sum *= n;
        j += sum;
    }
    printf("%d\n", j);*/

    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

    //arr[]�в��ҵ���ֵ
    int k = 7;
    
    //ȷ��arr[]�����±�����±�
    int left = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С���Ե�һ��Ԫ�صĴ�С����������Ԫ�صĸ���
    int right = sz - 1;

    while (left<=right) {
        //��ƽ��ֵ
        int mid = (left + right) / 2;
        if (arr[mid] < k) {
            left = mid + 1;
        }
        else if (arr[mid] > k) {
            right = mid - 1;
        }
        else {
            printf("�ҵ���:%d\n", mid);
            break;
        }
    }
    if (left > right) {
        printf("�Ҳ���");
    }

    return 0;
}