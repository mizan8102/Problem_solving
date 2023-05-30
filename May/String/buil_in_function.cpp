#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   string a="Mizanur rAhman";
   cout << "Size a string =" <<  a.size() << endl;

   cout << "capacity of a string =" << a.capacity() << endl;
   cout << "define max size=" << a.max_size() << endl;
   a.clear();
   cout << "After clear value of a=" << a << endl;  
   return 0;
}