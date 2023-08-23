#include<stdio.h>
#include<string.h>
int main(){
    char ar[1002];
    char car[1002];
    scanf("%s",&ar);
    int z=0;
    for(int i=strlen(ar)-1; i >=0 ; i--){
       car[z]=ar[i];
       if(i==0){
           car[z+1] ='\0'; 
       }
       z++;  
    }
    if(!strcmp(ar,car)){
       printf("YES"); 
    }else{
        printf("NO");
    }
    return 0;
}