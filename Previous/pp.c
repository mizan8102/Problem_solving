#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ar[1001];
    scanf("%s",ar);
    int count=0;
    for (int i = 0; i < strlen(ar); i++)
    {
       if(ar[i]=='a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i]=='u'){
            count++;
        }
    }
    
    printf("%d",count);
    return 0;
}
