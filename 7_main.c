//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int arr[10];
    int *p = arr;
    
    for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++) printf("%d ", arr[i]);
    return 0;
}
