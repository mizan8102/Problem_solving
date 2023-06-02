#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class Person{
    public:
        int a;
        int b;
        Person(int aa, int bb){
            a=aa;
            b=bb;
        }
};

Person show(int a, int b){
   static Person pp(a,b) ;
    return pp;
}
int main(){
   Person pp= show(12,34);
   cout << "Result =" << pp.a + pp.b << endl;
   return 0;
}