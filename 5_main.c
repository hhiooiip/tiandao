//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int arr[5], s = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    arr[4] = s;

    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    printf("%d", arr[4]);

    return 0;
}
