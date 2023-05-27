#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   int a;
   cin >> a;
   int ar[a];
   for(int i=0; i<= a; i++){
       cin >> ar[i];
   }
   int aa[7]={0};
   for(int i=0; i<a; i++){
        int val=ar[i];
        aa[val]++;
   }
   for (int i = 0; i < 7; i++)
   {
        cout << i << "-" << aa[i] << endl;
   }

   return 0;
}