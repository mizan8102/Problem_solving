#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Program{
    public:
     int a;
     Program(int result){
        a=result;
     }
};
int main(){   
    Program pp(12);
    cout << "Value=" << pp.a << endl;
   return 0;
}