#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char ar[101][102];
    for(int i=0; i < n; i++){
        scanf("%s",ar[i]);
        int ff=strlen(ar[i])-1;
        if(strlen(ar[i])>10){
            printf("%c%d%c\n",ar[i][0],strlen(ar[i])-2,ar[i][ff]);
        }else{
            printf("%s\n",ar[i]);
        } 
    }
    return 0;
}