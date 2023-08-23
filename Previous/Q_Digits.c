#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0; i<a;i++){
        int b;
        scanf("%d",&b);
      do{
            printf("%d ",(b%10));
            b=b/10;
        }  while(b != 0);
        printf("\n");
    }
    return 0;
}