//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 1; i <= 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 4; i >= 1; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = 0;

    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d", arr[4]);

    return 0;
}
