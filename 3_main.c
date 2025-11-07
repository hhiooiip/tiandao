//202511716133
//1497798389@qq.com
//陈渝
#include <stdio.h>
int main(){
    int a[10],t;
    for(int i=0;i<10;i++) ｛
        scanf("%d",&a[i]);
    ｝
    for(int i=0;i<9;i++)｛
        for(int j=0;j<9-i;j++)｛
            if(a[j]>a[j+1]){
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
        ｝
    ｝
    
    for(int i=0;i<10;i++)｛ 
        printf("%d ",a[i])
            ｝
    return 0;
}
