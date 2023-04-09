#include<stdio.h>
int main(){
    int n,MAX=0;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
         if(MAX < a){
            MAX=a;
        }
    }
    printf("%d",MAX);
    
    
    return 0;
}