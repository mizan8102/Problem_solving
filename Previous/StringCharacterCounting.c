#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s",name);
    int cnt[26]={0};
    for (int i = 0; i < strlen(name); i++)
    {
        int a=name[i]-97;
        cnt[a]++;
    }
    for (int i = 0; i < 26; i++)
    {
       
            printf("%c-%d\n",i+97,cnt[i]);
        
    }
    return 0;
}