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
    //    sum = 1;        //在计算每一次阶乘之前都初始化一下
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

    //arr[]中查找的数值
    int k = 7;
    
    //确定arr[]的左下标和右下标
    int left = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以第一个元素的大小，这是数组元素的个数
    int right = sz - 1;

    while (left<=right) {
        //找平均值
        int mid = (left + right) / 2;
        if (arr[mid] < k) {
            left = mid + 1;
        }
        else if (arr[mid] > k) {
            right = mid - 1;
        }
        else {
            printf("找到了:%d\n", mid);
            break;
        }
    }
    if (left > right) {
        printf("找不到");
    }

    return 0;
}