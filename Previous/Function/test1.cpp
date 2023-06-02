#include<iostream>
using namespace std;

// function prototype
int sum(int a,int b);
int main(){
   cout << "Result is =" << sum(34,54) << endl;
   return 0;
}
int sum(int a,int b){
    return a+b;
}
