#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i < n; i++){
        scanf("%d",&ar[i]);
    }
    int cnt[101]={0};
    for(int i=0; i < n; i++){
        cnt[ar[i]]++;
    }
    for (int i = 0; i < 101; i++)
    {
        if(cnt[i] !=0){
            printf("%d-%d\n",i,cnt[i]);
        }
    }
    return 0;
}