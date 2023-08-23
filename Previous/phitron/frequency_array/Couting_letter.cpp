#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
//    int a;
//    cin >> a;
   char c[100];
   cin.getline(c,100);
   int count[26]={0};
   for(int i=0; i<strlen(c); i++){
    int val=int(c[i])-97;
    count[val]++;
   }
   for(int i=0; i<26; i++){
    // if(count[i] != 0){
       
    // } 
    cout << char(i+97) << "-" <<  count[i] << endl;
   }

   return 0;
}