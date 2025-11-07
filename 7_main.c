//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>
void reverse(int a[],int n){
    for(int i=0;i<n/2;i++){
        int t=a[i]; a[i]=a[n-1-i]; a[n-1-i]=t;
    }
}
int main(){
    int a[5];
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    reverse(a,5);
    for(int i=0;i<5;i++) printf("%d",a[i]);
    return 0;
}
