//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int n = 100, a, b, c, f = 1;

    while(n <= 999) {
        a = (n - n % 100) / 100;
        b = (n % 100 - n % 10) / 10;
        c = n % 10;

        if(a*a*a + b*b*b + c*c*c == n) {
            if(f) {
                printf("%d", n);
                f = 0;
            } else {
                printf(" %d", n);
            }
        }

        n++;
    }

    return 0;
}
