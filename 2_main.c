//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 2; 
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
