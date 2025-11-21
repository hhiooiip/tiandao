//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

void add_one(int *arr) {
    for(int i = 0; i < 5; i++) {
        (*(arr + i))++;
    }
}

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    add_one(arr);

    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}
