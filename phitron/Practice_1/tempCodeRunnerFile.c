#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int swap;
    if(a<b){
        swap=a;
        a=b;
        b=a;
    }
    if(a%b ==0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
    return 0;
}