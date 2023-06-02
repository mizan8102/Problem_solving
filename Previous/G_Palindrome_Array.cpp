#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPalindrome(int *a,int size){
    int first=0,last=size-1;
    while (first < last)
    {
        if(a[first] != a[last]){
            return false;
        }
        last--;
        first++;
    }
    return true;
}
int main(){
    int a,count=0;
    cin >> a;
   int ar[a];
   for (int i = 0; i < a; i++)
   {
        cin >> ar[i];
   }

  if(isPalindrome(ar,a))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
    
   
   
   return 0;
}