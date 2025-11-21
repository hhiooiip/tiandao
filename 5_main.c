//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

void shift_array(int *ptr_arr, int len) {
    for(int i = len - 1; i > 0; i--) {
        ptr_arr[i] = ptr_arr[i - 1];
    }
    ptr_arr[0] = 0;
}

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    shift_array(arr, 5);

    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}
