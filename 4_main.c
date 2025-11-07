//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>
int power(int a,int b){
    int f=1;
    for(int i=0;i<b;i++) f*=a;
    return f;
}
int main(){
    int s=0;
    for(int i=1;i<=5;i++) s+=power(i,2);
    printf("%d",s);
    return 0;
}
