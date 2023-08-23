#include<stdio.h>

long long small(long long f,long long e,long long g){
    if(f <= e && f <=g){
        return f;
    }else if(e <= f && e <= g){
        return e;
    }else{
        return g;
    }
}
int main(){
    long long a,b,c,total=0;
    scanf("%lld %lld %lld",&a,&b,&c);
    if( a>= 1 && b >=1 && c >=1){
        total+=small(a,b,c);
        a=a-small(a,b,c);
        b=b-small(a,b,c);
        c=c-small(a,b,c);
    }
     if(a>=c){

        total+=c/2;
    }
    printf("%lld",total);
    return 0;
}