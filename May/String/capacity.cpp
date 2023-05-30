#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
   string a="Mizanur rAhman";
   cout << "Size a string =" <<  a.size() << endl;

   cout << "capacity of a string =" << a.capacity() << endl;
   cout << "define max size=" << a.max_size() << endl;
   a.clear();
   if(a.empty()==true) 
        cout << "this value is empty" << endl;
   else 
        cout << "After clear value of a=" << a << endl;
   
   // string input 
    string name;
    cin >> name; // input without space , space cannot get input cin
    cout << "Name =" << name << endl;

    cout << "size of name=" << name.size() << endl;
    name.resize(5);
    cout << "after resize name =" << name << endl;
    name.resize(10,'X');
    cout << "After size increase again name=" << name << endl;
   return 0;
}