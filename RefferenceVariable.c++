#include<iostream>
using namespace std;
int main(){
    float a=56.43;
    float w=4.5;
    // reference variable 
    float &y=a;
    // type casting 
    int aa=int(w);
    cout << "The value of a =" << aa << endl << "casting value =" << float(aa) << endl;
    cout << sizeof(double(aa)) << endl;
    cout << "it's value of y =" << y << endl << "it's value of ="<< a;
}