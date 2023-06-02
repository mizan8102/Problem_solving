#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long ar[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&ar[i]);
    }

    for(int j=n-1; j>=0; j--){
        printf("%lld ",ar[j]);
    }
    return 0;
}