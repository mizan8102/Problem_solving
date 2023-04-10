#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cin >> n;
   vector<int> ar(n);
   for (int i = 0; i < n; i++)
   {
     cin >> ar[i];
   }
   for (int i = 0; i < n; i++)
   {
    cout << factorial(ar[i]) << endl;
   }
   return 0;
}