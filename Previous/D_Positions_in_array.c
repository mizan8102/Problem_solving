#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<n;j++){
        if(ar[j] <= 10){
            printf("A[%d] = %d\n",j,ar[j]);
        }
    }
    return 0;
}