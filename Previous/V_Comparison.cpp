#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   int a,b;
   char c;
   cin >> a >> c >> b;
   switch (c)
   {
   case '>':
        if(a>b){
            cout << "Right" << endl;
        }else{
            cout << "Wrong" << endl;
        }
        break;
    case '<':
        if(a<b){
             cout << "Right" << endl;
        }else{
            cout << "Wrong" << endl;
        }
        break;
    case '=':
        if(a==b){
             cout << "Right" << endl;
        }else{
            cout << "Wrong" << endl;
        }
        break;
   
   default:
    cout << "Wrong" << endl;
    break;
   }
   return 0;
}