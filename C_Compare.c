#include<stdio.h>
#include<string.h>
int main(){
    char x[102],y[102];
    scanf("%s %s",&x,&y);
    if(strlen(x)>=strlen(y)){
        printf("%s",y);
    }else{
        printf("%s",x);
    }
    return 0;
}