#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   int a,b,c,sum=0;
   char s,q;
   cin >> a >> s >> b >> q >> c;
   switch (s)
   {
    case '+':
         sum=a+b;
        if(sum==c){
            cout << "Yes" << endl;
        }else{
            cout << sum << endl;
        }
        break;
    case '-':
         sum=a-b;
        if(sum==c){
            cout << "Yes" << endl;
        }else{
            cout << sum << endl;
        }
        break;
    case '*':
         sum=a*b;
        if(sum==c){
            cout << "Yes" << endl;
        }else{
            cout << sum << endl;
        }
        break;

    default:
        break;
    }
   return 0;
}