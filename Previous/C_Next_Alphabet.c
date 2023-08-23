#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if( c =='z'){
        printf("a\n");
    }else{
        int a=c+1;
        printf("%c\n",a);
    }
    return 0;
}