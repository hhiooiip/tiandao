//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>
int sum(int a[],int n){
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    return s;
}
int mul(int a[],int n){
    int m=1;
    for(int i=0;i<n;i++) m*=a[i];
    return m;
}
int main(){
    int a[5];
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    printf("%d %d",sum(a,5),mul(a,5));
    return 0;
}
