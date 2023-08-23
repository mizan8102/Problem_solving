#include<stdio.h>
#include<string.h>
int main(){
    char a[12],b[12];
    scanf("%s %s",a,b);
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);
    char f1=a[0];
    a[0]=b[0];
    b[0]=f1;
   printf("%s %s",a,b);
    return 0;
}