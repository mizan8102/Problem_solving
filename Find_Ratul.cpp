#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isRatul(string str){
   stringstream ss(str);
   string word;
   while(ss >> word){
    if(word == "Ratul"){
        return true;
    }
   }
   return false;
}
int main(){
   string str;
   getline(cin,str);
   isRatul(str) ? cout << "YES" << endl: cout << "NO" << endl;
   return 0;
}