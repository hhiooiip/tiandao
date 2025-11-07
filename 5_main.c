//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>
int sum(int a1,int an,int step){
    int n=(an-a1)/step+1;
    return n*(a1+an)/2;
}
int main(){
    printf("%d",sum(1,100,1));
    return 0;
}
