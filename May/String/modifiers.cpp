#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   
   string a="hello ";
   string b ="World";

// concate string
    cout << a+" "+b << endl;
    a+=b;
    cout << a << endl;
// concatenate using append fuction 
    cout << a.append(b) << endl;
   return 0;
}