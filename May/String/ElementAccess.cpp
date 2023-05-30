#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   
   string name="Mizanur RahmaD";
   cout << name[0] << endl;
   // at function 
   cout << name.at(0) << endl;
   // find last element
   cout << name.back() << endl;
   cout << name[name.size()-1] << endl;;
   // access the first element 
   cout << name.front() << endl;
   cout << name[name.size()-name.size()] << endl;
   return 0;
}