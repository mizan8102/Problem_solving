#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int l=a%10;
    int f=a/10;
    if(l%f==0){
        printf("YES\n");
    }else if(f%l ==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}