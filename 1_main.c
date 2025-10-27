//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int n, i, f = 1;

    scanf("%d", &n);

    if (n <= 0 || n >= 50) {
        printf("请输入1个小于50的正整数");
        return 0;
    }

    if (n == 1)
        f = 0;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                f = 0;
                break;
            }
        }
    }

    if (f) {
        printf("密钥安全，密码设置成功");
    } else {
        printf("密钥不安全，请重新输入");
    }

    return 0;
}
