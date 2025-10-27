//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            i--;
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d", arr[4]);

    return 0;
}
