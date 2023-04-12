#include<stdio.h>
int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    long long s=a-b;
    if(s>=0){
        printf("%lld",s);
    }else{
        printf("0");
    }
    return 0;
}