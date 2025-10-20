//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);

    if (s < 0 || s > 100) {
        printf("无效\n");
    } else if (s >= 90) {
        printf("A\n");
    } else if (s >= 80) {
        printf("B\n");
    } else if (s >= 70) {
        printf("C\n");
    } else if (s >= 60) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}
