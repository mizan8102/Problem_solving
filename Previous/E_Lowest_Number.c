#include<stdio.h>
int main(){
    int n,index;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int min=100000;
    for(int j=0; j<n; j++){
        if(min > ar[j]){
            min=ar[j];
            index=j;
        }
    }
    printf("%d %d\n",min,index+1);
    return 0;
}