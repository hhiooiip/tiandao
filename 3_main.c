//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main()
{
    int a, b;
    char o;
    scanf("%d %d %c", &a, &b, &o);

    if (o == '+') {
        printf("%d\n", a + b);
    } else if (o == '-') {
        printf("%d\n", a - b);
    } else if (o == '*') {
        printf("%d\n", a * b);
    } else if (o == '/') {
        if (b != 0) {
            printf("%d\n", a / b);
        } else {
            printf("除数不能为0\n");
        }
    } else {
        printf("符号错误\n");
    }

    return 0;
}
