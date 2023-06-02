#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
    int a,count=0;
    cin >> a;
   int ar[a];
   for (int i = 0; i < a; i++)
   {
        cin >> ar[i];
   }

   int even_odd=a/2;
   if(a%2==0){
        cout << "NO" << endl;
   }else{
    int ss=a-1;
    for (int i = 0; i < even_odd; i++)
    {
        if(ar[i]==ar[ss]){
            count++;
        }else{
            cout << "NO" << endl;
            break;
        }
        ss--;
    }
    if(count == even_odd){
         cout << "YES" << endl;
    }
    
   }
   
   return 0;
}