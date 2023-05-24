#include<bits/stdc++.h>

#include<iostream>
#include<climits>
using namespace std;

int main(){
   int a;
   cin >> a;
   while(a--){
    int array_size;
    cin >> array_size;
    int ar[array_size];
    for(int i=0; i<array_size; i++){
        cin >> ar[i];
    }
    int minSum=INT_MAX;
    for(int i=0; i<array_size; i++){
        for(int j=i+1; j<array_size; j++){
              int mm=ar[i]+ar[j]+j-i;
              minSum=min(minSum,mm);
        }
    }
    cout << minSum << endl;
   }
   return 0;
}