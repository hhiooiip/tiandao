//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>

int main() {
    int matrix[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
