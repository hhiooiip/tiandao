//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int n, i, f;

    scanf("%d", &n);

    if(n <= 0 || n >= 50) {
        printf("请输入1个小于50的正整数");
        return 0;
    }

    f = 1;
    if(n == 1) f = 0;
    else {
        i = 2;
        while(i * i <= n && f) {
            if(n % i == 0) f = 0;
            i++;
        }
    }

    if(f)
        printf("密钥安全，密码设置成功");
    else
        printf("密钥不安全，请重新输入");

    return 0;
}
