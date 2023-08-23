#include<stdio.h>
int main(){
    int n,count=0,index;
    long long s;
    scanf("%d",&n);
    long long arr[n];
    for(int i=0;i<n; i++){
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&s);
    for(int j=0;j<n;j++){
        if(s==arr[j]){
            index=j;
            count++;
            break;
        }
    }
    if(count>0){
        printf("%d\n",index);
    }else{
        printf("-1");
    }
    return 0;
}