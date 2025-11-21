//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    int *p = &a;
    *p = *p + 10;
    
    printf("%d,%d\n", a, *p);
    return 0;
}

    
