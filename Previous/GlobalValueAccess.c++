#include<iostream>
using namespace std;
int boy=60;
int main(){
    int boy=79;
    cout << "Boy Result are :" << boy << "\n" ;

    // get global value 
    cout << "Global boy result are :" << ::boy;
    return 0;
}