#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   string name="Mizanur Rahman";
   name.assign("Helloworld");
   name.erase(2,3);

   name.replace(4,3,"So");
   cout << name << endl;
   
   return 0;
}