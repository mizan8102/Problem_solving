#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    long long arr[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int j=0; j<n;j++){
        sum +=arr[j];
    }
    if(sum<0){
        sum=sum*-1;
    }
    printf("%lld",sum);
    return 0;
}