#include<stdio.h>
#include<string.h>
int main(){
    char ar[100002];
    scanf("%s",&ar);
    for (int i = 0; i < strlen(ar); i++)
    {
       if( ar[i] >= 'a' && ar[i] <= 'z'){
            printf("%c",ar[i]-32);
       }else if(ar[i] >= 'A' && ar[i] <= 'Z'){
            printf("%c",ar[i]+32);
       }else if(ar[i] == ','){
            printf(" ");
       }
    }
    return 0;
}

// a ascii value =97 and uppercase -32
// z ascii value 